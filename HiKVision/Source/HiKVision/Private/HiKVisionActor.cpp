// Fill out your copyright notice in the Description page of Project Settings.



#include "HiKVisionActor.h"
#include "Runtime/Engine/Classes/Engine/Texture2D.h"
#include "Runtime/Engine/Classes/Engine/Texture.h"
#include "Runtime/Core/Public/Containers/StringConv.h"
#include "StandFile.h"

std::vector<cv::String> getOutputsNames(const cv::dnn::Net& net)
{

	static std::vector<cv::String> names;
	if (names.empty())
	{
		//Get the indices of the output layers, i.e. the layers with unconnected outputs
		outLayers = net.getUnconnectedOutLayers();

		//get the names of all the layers in the network
		layersNames = net.getLayerNames();

		// Get the names of the output layers in names
		names.resize(outLayers.size());
		for (size_t i = 0; i < outLayers.size(); ++i)
			names[i] = layersNames[outLayers[i] - 1];
	}
	return names;
}



AHikVisionActor::AHikVisionActor()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	//FString TempPath = FPaths::ProjectPluginsDir() + TEXT("HiKVision/Source/HiKVision/haarcascade_frontalface_default.xml");
	//cv::String str = std::string(TCHAR_TO_UTF8(*TempPath));
	//FaceCascadeClassifier.load(str);

	

}

TSharedPtr<FJsonObject> AHikVisionActor::GetJsonObjectFromFile(FString FileDir, FString FileName)
{
	FString inDir = FileDir.Replace(TEXT("\\"), TEXT("/"));
	inDir += (TEXT("/") + FileName);
	FString fileContent;
	FFileHelper::LoadFileToString(fileContent, *inDir);
	TSharedPtr<FJsonObject> RootObj = MakeShareable(new FJsonObject());
	TSharedRef<TJsonReader<>> reader = TJsonReaderFactory<>::Create(fileContent);
	if (FJsonSerializer::Deserialize(reader, RootObj))
	{
		return RootObj;
	}
	else
	{
		return nullptr;
	}
}

// Called when the game starts or when spawned
void AHikVisionActor::BeginPlay()
{

	/**读取配置文件配置信息*/
	//FString PluginConfigDir = FPaths::ProjectPluginsDir() + "HiKVision/Config/";
	FString PluginConfigDir = "D:\\Users\\chong.peng\\Documents\\Unreal Projects\\CVTest\\OpenCV_Test\\Plugins\\HiKVision\\Config\\";
	TSharedPtr<FJsonObject> Obj = GetJsonObjectFromFile(PluginConfigDir, FString("WaterCurtainDoor.json"));
	day_confidence = (float)Obj->GetNumberField("dayConfidence");
	night_confidence = (float)Obj->GetNumberField("nightConfidence");
	AlphaValue = (float)Obj->GetNumberField("alphaValue");
	BrightlessValue = (float)Obj->GetNumberField("BrightlessValue");
	Yolo3Confidence = (float)Obj->GetNumberField("Yolo3Confidence");
	OpenFace = Obj->GetBoolField("Openfacerecognition");
	OpenBody = Obj->GetBoolField("OpenBodyrecognition");
	bUseTCP = Obj->GetBoolField("UseTCP");
	/**DNN Face Recognation*/
	FString DnnModels = PluginConfigDir + TEXT("res10_300x300_ssd_iter_140000_fp16.caffemodel");
	FString DNNBinary = PluginConfigDir + TEXT("deploy.prototxt");
	net = cv::dnn::readNetFromCaffe(TCHAR_TO_UTF8(*DNNBinary), TCHAR_TO_UTF8(*DnnModels));


	net.setPreferableBackend(cv::dnn::Backend::DNN_BACKEND_OPENCV);
	net.setPreferableTarget(cv::dnn::Target::DNN_TARGET_CPU);

	//Body Recognation
	std::string Yolov3Weights(TCHAR_TO_UTF8(*(FPaths::ConvertRelativePathToFull(PluginConfigDir) + TEXT("yolov3.weights"))));
	std::string Yolov3cfg(TCHAR_TO_UTF8(*(FPaths::ConvertRelativePathToFull(PluginConfigDir) + TEXT("yolov3.cfg"))));
	std::string classesFile(TCHAR_TO_UTF8(*(FPaths::ConvertRelativePathToFull(PluginConfigDir) + TEXT("coco.names"))));
	std::ifstream ifs(classesFile);
	std::string classline;
	while (std::getline(ifs, classline))
	{
		classes.push_back(classline);
	}


	Yolov3Net = cv::dnn::readNetFromDarknet(Yolov3cfg, Yolov3Weights);
	Yolov3Net.setPreferableBackend(cv::dnn::Backend::DNN_BACKEND_OPENCV);
	Yolov3Net.setPreferableTarget(cv::dnn::Target::DNN_TARGET_CPU);
	if (net.empty() | Yolov3Net.empty()) return;


	Super::BeginPlay();
	if (!bUseTCP)
	{
		InitCameraAndThreadRunnable(0);

	}

}

// Called every frame
void AHikVisionActor::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	if (FindPerson) ShowPerson(FindPerson);
	if (FaceCount) ShowFaceCount(FaceCount);

}
void AHikVisionActor::EndPlay(const EEndPlayReason::Type EndPlayReason)
{
	Super::EndPlay(EndPlayReason);
	if (ReadThread)
	{
		ReadThread->Stop();
		ReadThread = nullptr;

	}
	if (Cap.isOpened())
	{
		Cap.release();
	}
	FindPerson = 0;
	FaceCount = 0;


}



void AHikVisionActor::InitCameraAndThreadRunnable(uint32 index)
{
	Async<>(EAsyncExecution::Thread, [=]()
		{
			if (Cap.open(index))
			{
				UE_LOG(LogTemp, Warning, TEXT("OpenCamera Sucessful"));
				Cap.set(CV_CAP_PROP_FRAME_WIDTH,1920);
				Cap.set(CV_CAP_PROP_FRAME_HEIGHT,1080);
				Cap.set(CV_CAP_PROP_FPS, 30);
				ReadThread = FReadImageRunnable::InitReadRunnable(this);
			}
			else
			{
				UE_LOG(LogTemp, Warning, TEXT("OpenCameraFailed"));
			}
			FPlatformProcess::Sleep(0.01);
		});
	

}
void AHikVisionActor::ReadFrame()
{
		if (Cap.isOpened())
		{
			cv::Mat frame;
			Cap.read(frame);
			if (frame.empty()) return;

			if (frame.channels() == 4)//检测读取相机画面的通道数量
			{
				cv::cvtColor(frame, frame, CV_BGRA2RGB);
			}
			EnhanceImgBrightness(frame, AlphaValue, BrightlessValue);/**通过判定晚上和白天自动对图片的对比度和亮度进行处理*/
			AsyncTask(ENamedThreads::GameThread, [=]()
			{
				UTexture2D* outTexture = ConvertMat2Texture2D(frame);
				ShowNativeImage(outTexture);

			});

			if (OpenFace) DNN_face_recognize(frame);//DNN 深度神经网络识别算法
			if (OpenBody) DNN_Yolo3_ObjectDetection(frame);//Yolo3 深度神经网络识别算法
		}


	
}

void AHikVisionActor::EnhanceImgBrightness(cv::Mat& inMat, float inAlpha, float inBrightlessValue)
{
	int rows = inMat.rows;
	int cols = inMat.cols;
	float CurrentTime = FDateTime::Now().GetHour();
	if (CurrentTime > 19 || CurrentTime < 6)
	{
		for (int row = 0; row < rows - 1; ++row)
		{
			for (int col = 0; col < cols - 1; ++col)
			{
				int aa = inMat.at<cv::Vec3b>(row, col)[0];
				int bb = inMat.at<cv::Vec3b>(row, col)[1];
				int cc = inMat.at<cv::Vec3b>(row, col)[2];
				inMat.at<cv::Vec3b>(row, col)[0] = cv::saturate_cast<uchar>(inAlpha *aa + inBrightlessValue);//调整整个图片的对比度和亮度
				inMat.at<cv::Vec3b>(row, col)[1] = cv::saturate_cast<uchar>(inAlpha * bb + inBrightlessValue);
				inMat.at<cv::Vec3b>(row, col)[2] = cv::saturate_cast<uchar>(inAlpha * cc + inBrightlessValue);
			}
		}
	}
}
UTexture2D* AHikVisionActor::ConvertMat2Texture2D(const cv::Mat& inMat)
{

	int32 width = inMat.cols;
	int32 height = inMat.rows;
	int32 Channels = inMat.channels();
	cv::Mat out;
	cv::cvtColor(inMat, out, CV_RGB2RGBA);
	UTexture2D* NewTexture = UTexture2D::CreateTransient(width, height);
	NewTexture->SRGB = 0;
	//NewTexture >CompressionSettings = TextureCompressionSettings::TC_Displacementmap;
	int DataSize = width * height * 4;
	void* Datas = NewTexture->PlatformData->Mips[0].BulkData.Lock(LOCK_READ_WRITE);
	FMemory::Memmove(Datas, out.data, DataSize);
	NewTexture->PlatformData->Mips[0].BulkData.Unlock();
	NewTexture->UpdateResource();
	return NewTexture;
}
void AHikVisionActor::CutImage(const cv::Mat inMat, FVector2D inPos)
{
	uint32 width = inMat.cols;
	uint32 height = inMat.rows;

	float wpos = (inPos.X + CutImageSize.X > width)?  (width - CutImageSize.X):inPos.X;
	float hpos = (inPos.Y + CutImageSize.Y > height) ? (height - CutImageSize.Y) : inPos.Y;

	cv::Mat cutOut = inMat(cv::Rect(wpos, hpos, CutImageSize.X, CutImageSize.Y));
	AsyncTask(ENamedThreads::GameThread, [=]()
		{
			UTexture2D* outTexture = ConvertMat2Texture2D(cutOut);
			ShowCutImage(outTexture);
		});


}
void AHikVisionActor::CutImageRect(const cv::Mat inMat, cv::Rect inRect)
{
	cv::Mat cutOut = inMat(inRect);
	AsyncTask(ENamedThreads::GameThread, [=]()
		{
			ShowCutImage(ConvertMat2Texture2D(cutOut));
		});
}

void AHikVisionActor::face_recognize(const cv::Mat& inMat)
{
	if (inMat.empty()) return;
		uint32 width = inMat.cols;
		uint32 height = inMat.rows;
		cv::Mat Gray;
		cv::cvtColor(inMat, Gray, CV_RGB2GRAY);
		FaceCascadeClassifier.detectMultiScale(Gray, face, 1.1, 3, 0, cv::Size(30, 30));
		int num = 0;
		
		if (face.empty())return;
		num = face.size();
		GEngine->AddOnScreenDebugMessage(5, 10, FColor::Yellow, FString::FromInt(num), false);
		uint32 Inscread = 30;
		TArray<UTexture2D*> outarr;
		for (auto it = face.begin(); it != face.end(); ++it)
		{
			uint32 poscenterx = it->x + it->width / 2;
			uint32 poscentery = it->y + it->height / 2;
			if (poscenterx-150 > 0 && poscentery-175 > 0 && poscenterx + 150 < width && poscentery +125 < height)
			{
				
				cv::Mat TempMat = inMat;
				cv::Mat cutOut = TempMat(cv::Rect(cv::Point(poscenterx -150, poscentery -175), cv::Point(poscenterx+150, poscentery+ 125)));
				if (cutOut.empty()) return;
				outarr.Add(ConvertMat2Texture2D(cutOut));

			}

		}
		if (outarr.IsValidIndex(0))
		{
           ShowFaceImageArr(outarr);	
		}
		face.clear();

}

void  AHikVisionActor::DNN_face_recognize(const cv::Mat& inMat)
{
	if (inMat.empty()) return;
	TArray<UTexture2D*> outarr;//类似std::Vector动态数组

	int32 width = inMat.cols;
	int32 height = inMat.rows;
	int32 outwidth = 300;
	int32 outheight = 300;
	cv::Mat inputBlob=cv::dnn::blobFromImage(inMat, 0.5, cv::Size(outwidth, outheight), cv::Scalar(0, 0, 0), false, false);
	net.setInput(inputBlob, "data");
	cv::Mat faceDetection = net.forward("detection_out");
	cv::Mat Detections(faceDetection.size[2], faceDetection.size[3], CV_32F, faceDetection.ptr<float>());
	FaceCount = 0;
	for (int i = 0; i < Detections.rows; i++)
	{
		float confidence = Detections.at<float>(i, 2);
		if ((FDateTime::Now().GetHour() > 19 || FDateTime::Now().GetHour() < 7) && confidence > night_confidence)
		{
			++FaceCount;
		}
		else if(confidence > day_confidence)
		{
			++FaceCount;
		}
			
	}


}
void AHikVisionActor::DNN_Yolo3_ObjectDetection(cv::Mat inMat)
{

	if (inMat.empty()) return;
	FindPerson = 0;
	int Width = inMat.cols;
	int Height = inMat.rows;
	cv::Mat m_blob = cv::dnn::blobFromImage(inMat, 1 / 255.0, cv::Size(inWidth, inHeight), cv::Scalar(0, 0, 0),false, false);
	Yolov3Net.setInput(m_blob);
	Yolov3Net.forward(m_outs, getOutputsNames(Yolov3Net));
	postprocess(inMat, m_outs);
	if(!m_outs.empty()) m_outs.resize(0);
}

void AHikVisionActor::ScaleRect(cv::Rect& inRect, float scale)
{
	cv::Point pointCenter = (inRect.x + inRect.width / 2, inRect.y + inRect.height / 2);
	inRect.x = pointCenter.x - inRect.width*scale / 2;
	inRect.y = pointCenter.y - inRect.height*scale / 2;

}

void AHikVisionActor::WhiteFace(cv::Mat inMat, uint32 alpha, uint32 beta)
{
	for (int y = 0; y < inMat.rows; y++)
	{
		for (int x = 0; x < inMat.cols; x++)
		{
			for (int c = 0; c < 3; c++)
			{
				inMat.at<cv::Vec3b>(y, x)[c] = cv::saturate_cast<uchar>(alpha*(inMat.at<cv::Vec3b>(y, x)[c]) + beta);
			}
		}
	}
}




/*Thread Instance*/
FReadImageRunnable*  FReadImageRunnable::ReadInstance = nullptr;


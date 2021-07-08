// Fill out your copyright notice in the Description page of Project Settings.



#include "HiKVisionActor.h"
#include "Runtime/Engine/Classes/Engine/Texture2D.h"
#include "Runtime/Engine/Classes/Engine/Texture.h"
#include "Runtime/Core/Public/Containers/StringConv.h"


// Sets default values
std::vector<cv::Rect> face;
std::vector<cv::Rect> dnnface;

AHikVisionActor::AHikVisionActor()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	//FString TempPath = FPaths::ProjectPluginsDir() + TEXT("HiKVision/Source/HiKVision/haarcascade_frontalface_default.xml");
	FString DnnModels= FPaths::ProjectPluginsDir() + TEXT("HiKVision/Source/HiKVision/res10_300x300_ssd_iter_140000_fp16.caffemodel");
	FString DNNBinary= FPaths::ProjectPluginsDir() + TEXT("HiKVision/Source/HiKVision/deploy.prototxt");
	//cv::String str = std::string(TCHAR_TO_UTF8(*TempPath));
	//FaceCascadeClassifier.load(str);
	net = cv::dnn::readNetFromCaffe(TCHAR_TO_UTF8(*DNNBinary), TCHAR_TO_UTF8(*DnnModels));
	net.setPreferableBackend(cv::dnn::Backend::DNN_BACKEND_OPENCV);
	net.setPreferableTarget(cv::dnn::Target::DNN_TARGET_CPU);
	 if (net.empty()) return;

}

// Called when the game starts or when spawned
void AHikVisionActor::BeginPlay()
{
	Super::BeginPlay();
	if (bOpenCamera)
	{
		InitCameraAndThreadRunnable(0);
	}

}

// Called every frame
void AHikVisionActor::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

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


}

void AHikVisionActor::InitCameraAndThreadRunnable(uint32 index)
{
	Async<>(EAsyncExecution::Thread, [=]()
		{
			if (Cap.open(index))
			{
				UE_LOG(LogTemp, Warning, TEXT("OpenCamera Sucessful"));
				Cap.set(CV_CAP_PROP_FRAME_WIDTH,3840);
				Cap.set(CV_CAP_PROP_FRAME_HEIGHT,2160);
				Cap.set(CV_CAP_PROP_FPS, 30);
				ReadThread = FReadImageRunnable::InitReadRunnable(this);
			}
			else
			{
				UE_LOG(LogTemp, Warning, TEXT("OpenCameraFailed"));
			}
		});
	

}
void AHikVisionActor::ReadFrame()
{

	cv::Mat frame, NativeFrame, Result, FinalMat, ThenMat;
	/*
	Cap.read(NativeFrame);
	if (NativeFrame.empty()) return;
	//cv::imwrite("C:\\Users\\pengchong\\Desktop\\image\\Native.jpg", NativeFrame);
	//frame = NativeFrame(cv::Rect(cv::Point(NativeFrame.cols*0.25,NativeFrame.rows*0.25), cv::Point(NativeFrame.cols*0.75, NativeFrame.rows*0.75)));
	//if (frame.empty())return;
	//cv::imwrite("C:\\Users\\pengchong\\Desktop\\image\\frame.jpg", frame);
	*/
	Cap.read(frame);
	if (frame.empty()) return;
	/*
	int bilateralFilterVal = 20; // ˫��ģ��ϵ��
	WhiteFace(frame, 1.1, 30);//�����ԱȶȺ�����
	cv::GaussianBlur(frame, frame, cv::Size(9, 9), 0, 0);//��˹ģ������������
	cv::bilateralFilter(frame, Result, bilateralFilterVal,bilateralFilterVal * 2, bilateralFilterVal / 2);//ĥƤ����
	cv::GaussianBlur(Result, ThenMat, cv::Size(0, 0), 9);
	cv::addWeighted(Result, 1.5, ThenMat, -0.5, 0, FinalMat);//ͼƬ��ǿ���񻯴���
	
	
	if(FinalMat.empty()) return;
	*/
	AsyncTask(ENamedThreads::GameThread, [=]()
		{
			//face_recognize(frame);
			DNN_face_recognize(frame);
		});
		
	

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
		//num = face.size();
	//	GEngine->AddOnScreenDebugMessage(5, 10, FColor::Blue, FString::FromInt(num), false);
}

void  AHikVisionActor::DNN_face_recognize(const cv::Mat& inMat)
{
	if (inMat.empty()) return;
	TArray<UTexture2D*> outarr;//类似std::Vector动态数组

	int32 width = inMat.cols;
	int32 height = inMat.rows;
	int32 outwidth = 300;
	int32 outheight = 300;
	float target_confidence = 0.6;

	cv::Mat inputBlob=cv::dnn::blobFromImage(inMat, 0.5, cv::Size(outwidth, outheight), cv::Scalar(0, 0, 0), false, false);
	net.setInput(inputBlob, "data");
	cv::Mat faceDetection = net.forward("detection_out");
	cv::Mat Detections(faceDetection.size[2], faceDetection.size[3], CV_32F, faceDetection.ptr<float>());
	for (int i = 0; i < Detections.rows; i++)
	{
		float confidence = Detections.at<float>(i, 2);
		if (confidence > target_confidence)
		{
			int32 LeftBottomx = static_cast<int>(Detections.at<float>(i, 3) * width)- xincreade;
			int32 LeftBottomy = static_cast<int>(Detections.at<float>(i, 4) * height)+ yincreade;
			int32 RightTopx = static_cast<int>(Detections.at<float>(i, 5) * width)+ xincreade;
			int32 RightTopy = static_cast<int>(Detections.at<float>(i, 6) * height)- yincreade;
			if ((LeftBottomx>0)&&(LeftBottomy<height)&&(RightTopx<width)&&(RightTopy>0))
			{
				cv::Mat OutMat = inMat(cv::Rect(cv::Point(LeftBottomx,LeftBottomy),cv::Point(RightTopx,RightTopy)));
				if (OutMat.empty()) return;
				outarr.Add(ConvertMat2Texture2D(OutMat));	
			}
		}
	}

	if (outarr.IsValidIndex(0))
	{
		ShowDNNFaceImageArr(outarr);
	}

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


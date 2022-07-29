// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"


#include "OpenCVLibrary.h"


#include "HikVisionLibrary.h"
#include "Runtime/Core/Public/HAL/RunnableThread.h"
#include "Runtime/Core/Public/HAL/Runnable.h"
#include "HiKVisionActor.generated.h"
//#define UpdateResource UpdateResourceW;
class FRunnable;
class FReadImageRunnable;
class UTexture2D;


UCLASS(BlueprintType)
class HIKVISION_API AHikVisionActor : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AHikVisionActor();
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	void InitCameraAndThreadRunnable(uint32 index);
	void ReadFrame();
	UTexture2D* ConvertMat2Texture2D(const cv::Mat& inMat);
	// Called every frame
	virtual void Tick(float DeltaTime) override;
	virtual void EndPlay(const EEndPlayReason::Type EndPlayReason)override;

	void WhiteFace(cv::Mat inMat, uint32 alpha, uint32 beta);

	void ScaleRect(cv::Rect& inRect,float scale);


public:	
	UFUNCTION(BlueprintImplementableEvent)
	void ShowImage(UTexture2D* outRGB,int Width,int Height);

	UFUNCTION(BlueprintImplementableEvent)
	void ShowFaceImageArr(const TArray< UTexture2D*>& RGBArr);//��������ü�
	UFUNCTION(BlueprintImplementableEvent)
		void ShowDNNFaceImageArr(const TArray< UTexture2D*>& RGBArr);//DNN �����������

	UFUNCTION(BlueprintImplementableEvent)
	void ShowCutImage( UTexture2D* outRGB);
	UFUNCTION(BlueprintImplementableEvent)
		void ShowNativeImage(UTexture2D* outRGB);

	UFUNCTION(BlueprintImplementableEvent)
		void ShowFaceCount(int Count);

	void CutImage(const cv::Mat inMat, FVector2D inPos);
	void CutImageRect(const cv::Mat inMat, cv::Rect inRect);

	void face_recognize(const cv::Mat& inMat);
	void DNN_face_recognize(const cv::Mat& inMat);

	void DNN_Yolo3_ObjectDetection(cv::Mat inMat);
	UFUNCTION(BlueprintImplementableEvent)
	void ShowPerson(int findCount=0);//DNN yolo3 ����ʶ���㷨
	/**Enhance the brightness of the night picture
	@inAlpha is contrast ratio
	@inBrightlessValue is brightless 
	*/
	void EnhanceImgBrightness(cv::Mat& inMat,float inAlpha,float inBrightlessValue);
	/**��ȡ�����ļ���Ϣ*/
	TSharedPtr<FJsonObject> GetJsonObjectFromFile(FString FileDir, FString FileName);
public:

	cv::VideoCapture Cap;
	FReadImageRunnable* ReadThread;
	//UPROPERTY(EditAnywhere)
	/**cut image of size*/
	FVector2D CutImageSize = (250,250);

	//UPROPERTY(EditAnywhere)
	int xincreade = 150;
	//UPROPERTY(EditAnywhere)
		int yincreade = 300;

	UPROPERTY(EditAnywhere,BlueprintReadwrite)
	bool bUseTCP = false;
	cv::CascadeClassifier FaceCascadeClassifier;
	//cv::CascadeClassifier EyeCascadeClassifier;
	cv::String XMLPath = "";
	cv::String EyeName = "haarcascade_eye.xml";
	cv::String FaceName = "haarcascade_frontalface_default.xml";
	cv::dnn::Net net;//DNN ����ʶ��
	cv::dnn::Net Yolov3Net;//Yolo3����ʶ��
	
	
	//std::vector<cv::Rect> eyes;

private:
	float day_confidence = 0.6;
	float night_confidence = 0.1;
	float BrightlessValue = 60.0;
	float AlphaValue = 1.3;
public:
	UPROPERTY(EditAnywhere)
	bool OpenFace = true;  //进行人脸识别
	UPROPERTY(EditAnywhere)
	bool OpenBody = false;  //进行对象识别

	
};


 

class HIKVISION_API FReadImageRunnable :public FRunnable
{
public:
	static FReadImageRunnable* InitReadRunnable(AHikVisionActor* inActor)
	{
		if (!ReadInstance&&FPlatformProcess::SupportsMultithreading())
		{
			ReadInstance=new FReadImageRunnable(inActor);
		}
		return ReadInstance;
	}

public:

	virtual bool Init() override
	{
		StopThreadCounter.Increment();
		return true;
	}

	virtual uint32 Run() override
	{
		if (!ReadActor)
		{
			UE_LOG(LogTemp, Warning, TEXT("AHikVisionActor Actor is not spawn"));
			return 1;
		}

		
		while (StopThreadCounter.GetValue())
		{
				ReadActor->ReadFrame();
		}

		/*
			double StartTime = FDateTime::Now().GetTimeOfDay().GetTotalMilliseconds();
			while (StopThreadCounter.GetValue())
			{
				double EndTime = FDateTime::Now().GetTimeOfDay().GetTotalMilliseconds();
				if (EndTime - StartTime > 1000)
				{
					ReadActor->ReadFrame();
					StartTime = FDateTime::Now().GetTimeOfDay().GetTotalMilliseconds();
				}
				else
				{
					continue;
				}
			}
			*/
		return 0;
	}


	virtual void Exit() override
	{
		
	}

	virtual void Stop() override
	{
		if(ReadInstance)
		{
			ReadInstance->EnsureThread();
			delete ReadInstance;
			ReadInstance = nullptr;
		}

	}
	void EnsureThread()
	{
		StopThreadCounter.Decrement();
		if (ReadImageThread) {
			ReadImageThread->WaitForCompletion();
		}
	}
protected:
	FReadImageRunnable(AHikVisionActor* inReadActor) 
	{
		
		ReadActor = inReadActor;
		ReadImageThread = FRunnableThread::Create(this, TEXT("ReadImageRunnable"));
	}


	~FReadImageRunnable() {

	};


private:
	FRunnableThread* ReadImageThread;
	AHikVisionActor* ReadActor;
	static FReadImageRunnable* ReadInstance;
	FThreadSafeCounter StopThreadCounter;
};

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
	void ShowFaceImageArr(const TArray< UTexture2D*>& RGBArr);
	UFUNCTION(BlueprintImplementableEvent)
		void ShowDNNFaceImageArr(const TArray< UTexture2D*>& RGBArr);

	UFUNCTION(BlueprintImplementableEvent)
	void ShowCutImage( UTexture2D* outRGB);

	void CutImage(const cv::Mat inMat, FVector2D inPos);
	void CutImageRect(const cv::Mat inMat, cv::Rect inRect);

	void face_recognize(const cv::Mat& inMat);
	void DNN_face_recognize(const cv::Mat& inMat);
public:

	cv::VideoCapture Cap;
	FReadImageRunnable* ReadThread;
	UPROPERTY(EditAnywhere)
	/**cut image of size*/
	FVector2D CutImageSize = (250,250);

	UPROPERTY(EditAnywhere)
	int xincreade = 150;
	UPROPERTY(EditAnywhere)
		int yincreade = 300;

	UPROPERTY(EditAnywhere)
	bool bOpenCamera =true;
	cv::CascadeClassifier FaceCascadeClassifier;
	//cv::CascadeClassifier EyeCascadeClassifier;
	cv::String XMLPath = "";
	cv::String EyeName = "haarcascade_eye.xml";
	cv::String FaceName = "haarcascade_frontalface_default.xml";
	cv::dnn::Net net;
	
	
	//std::vector<cv::Rect> eyes;
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
		AllowReadCapture = true;
		return true;
	}

	virtual uint32 Run() override
	{
		if (!ReadActor)
		{
			UE_LOG(LogTemp, Warning, TEXT("AHikVisionActor Actor is not spawn"));
			return 1;
		}

		double StartTime = FDateTime::Now().GetTimeOfDay().GetTotalMilliseconds();
		while (AllowReadCapture)
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
		return 0;
	}


	virtual void Exit() override
	{
		
	}

	virtual void Stop() override
	{
		AllowReadCapture = false;
		ReadActor = nullptr;
		
		if(ReadInstance)
		{
			delete ReadInstance;
			ReadInstance = nullptr;
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
	bool AllowReadCapture = false;
};

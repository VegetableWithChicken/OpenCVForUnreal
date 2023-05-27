#pragma once
#include  "Wrap.h"
#ifdef CREATEDELL_API
#else
#define CREATEDELL_API _declspec(dllimport)
#endif


	
	class CREATEDELL_API WrapCV
	{
	public:
		static cv::Mat OutGreen_Screen(const cv::Mat inMat);
	};



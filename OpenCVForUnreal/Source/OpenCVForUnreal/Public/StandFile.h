#pragma once
// Sets default values

#include "OpenCVLibrary.h"
#include "OpenCVForUnrealLibrary.h"

std::vector<cv::Rect> face;
std::vector<cv::Rect> dnnface;
std::vector<cv::Mat> m_outs;		//�������
std::vector<std::string> outNames;
std::vector<std::string> classes;//��ȡ�����ļ��ж�������
std::vector<std::string> layersNames;//��ȡ�������еĲ㼶����layout
std::vector<int> outLayers;
std::vector<int> classIds;



float nmsThreshold = 0.4;//���������ֵ��һ��ѡ��0.3-0.5��
int inWidth = 608;//����ʶ���У��������������ĳߴ�
int inHeight = 608;//����ʶ���У��������������ĳߴ�
float Yolo3Confidence = 0.5;/*yolo3����ʶ�����Ŷ�*/
int PersonNumber = 0;//��⵽�˵�����
int FindPerson = 0;//Tick����
int FaceCount = 0;//Tick ����
std::vector<cv::Rect> boxes;
std::vector<float> confidences;
std::vector<int> indices;

void postprocess(const cv::Mat& frame, std::vector<cv::Mat>& outs)
{
	

	for (size_t i = 0; i < outs.size(); ++i)
	{
		// Scan through all the bounding boxes output from the network and keep only the
		// ones with high confidence scores. Assign the box's class label as the class
		// with the highest score for the box.
		float* data = (float*)outs[i].data;
		for (int j = 0; j < outs[i].rows; ++j, data += outs[i].cols)
		{
			cv::Mat scores = outs[i].row(j).colRange(5, outs[i].cols);
			cv::Point classIdPoint;
			double confidence;
			// Get the value and location of the maximum score
			cv::minMaxLoc(scores, 0, &confidence, 0, &classIdPoint);

			if (confidence > Yolo3Confidence)
			{
				int centerX = (int)(data[0] * frame.cols);
				int centerY = (int)(data[1] * frame.rows);
				int width = (int)(data[2] * frame.cols);
				int height = (int)(data[3] * frame.rows);
				int left = centerX - width / 2;
				int top = centerY - height / 2;

				classIds.push_back(classIdPoint.x);
				confidences.push_back((float)confidence);
				boxes.push_back(cv::Rect(left, top, width, height));
			}
		}
	}

	// Perform non maximum suppression to eliminate redundant overlapping boxes with
	// lower confidences
	
	cv::dnn::NMSBoxes(boxes, confidences, Yolo3Confidence, nmsThreshold, indices);
	for (size_t i = 0; i < indices.size(); ++i)
	{
		int idx = indices[i];
		std::string prename = classes[classIds[idx]];
		if (prename == "person")
		{
			FindPerson+=1;
			break;
		}
		//drawPred(classIds[idx], confidences[idx], box.x, box.y,box.x + box.width, box.y + box.height, frame);
	}
	if(!boxes.empty()) boxes.resize(0);
	if (!confidences.empty())confidences.resize(0);
	if (!indices.empty()) indices.resize(0);
	if (!classIds.empty()) classIds.resize(0);

}

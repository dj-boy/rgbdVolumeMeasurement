#ifndef __CLOUDPOINT3DSPLICE_H__
#define __CLOUDPOINT3DSPLICE_H__

#ifdef _WIN32
#ifdef FOURIERMELLINREGISTRATION_EXPORTS
#define FOURIERMELLINREGISTRATION_API __declspec(dllexport)
#else
#define FOURIERMELLINREGISTRATION_API __declspec(dllimport)
#endif
#else
#define FOURIERMELLINREGISTRATION_API 
#endif

#ifndef EXTERN_C
	#ifdef __cplusplus
		#define EXTERN_C extern "C"
	#else
		#define EXTERN_C 
	#endif
#endif

#include <opencv.hpp>

//��ת���Ƿ�ʽ������С��Χ��
//box_vertex:0--3��ʾ����͵�Z����Ϊ��׼��xoyƽ����С��Χ�е�4���ǵ㡣4--5��ʾ��͵����ߵ�
EXTERN_C FOURIERMELLINREGISTRATION_API int getMinBoundingBoxByRC(const std::vector<cv::Point3f>& points, cv::Point3f box_vertex[8], cv::Point3f salient_points[6]
	,float* length = NULL, float* width = NULL, float* height = NULL,float sp = 0.0f);


//���������̬�����������任���󣺱��Ϊ��ǰ����߶�
EXTERN_C FOURIERMELLINREGISTRATION_API int getTransByPose(const cv::Vec4f& camera_pose, cv::Mat& mat);

#endif
#ifndef OPENCV_TOOLS
#define OPENCV_TOOLS


#include <iostream>
#include <opencv2/opencv.hpp>

using namespace std;
using namespace cv;

/******************灰度变换与空间滤波******************/
/******************频域滤波****************************/
/******************图像复原与重建**********************/
/******************彩色图像处理************************/
/******************小波和多分辨率处理******************/
/******************图像压缩****************************/
/******************形态学图像处理**********************/
/******************图像分割****************************/
void custom_canny(Mat &image, Mat &result);
void custom_sobel(Mat &image, Mat &result);

/******************表示和描述**************************/
/******************目标识别****************************/
/******************自定义算法**************************/
void custom0(Mat &image, Mat &result);
void custom1(Mat &image, Mat &result);
void custom2(Mat &image, Mat &result);
void custom3(Mat &image, Mat &result);
void custom4(Mat &image, Mat &result);

#endif

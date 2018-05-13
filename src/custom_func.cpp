#include <opencv-tools.hpp>


/******************灰度变换与空间滤波******************/
/******************频域滤波****************************/
/******************图像复原与重建**********************/
/******************彩色图像处理************************/
/******************小波和多分辨率处理******************/
/******************图像压缩****************************/
/******************形态学图像处理**********************/
/******************图像分割****************************/
void custom_canny(Mat &image, Mat &result)
{
	double threshold1, threshold2;
	int apertureSize = 3;
	bool L2gradient = false;
	cout << "threshold1(double,第一个滞后性阈值)" << endl;
	cin >> threshold1;
	cout << "threshold1(double,第二个滞后性阈值)" << endl;
	cin >> threshold2;
	cout << "apertureSize(int,应用Sobel算子的孔径大小，默认3)" << endl;
	cin >> apertureSize;
	cout << "L2gradient(bool,(输入0或1),计算图像梯度幅值的标识，默认false)" << endl;
	cin >> L2gradient;

	Canny(image, result, threshold1, threshold2, apertureSize, L2gradient);
}
/******************表示和描述**************************/
/******************目标识别****************************/

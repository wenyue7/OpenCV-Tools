#include <opencv-tools.hpp>


/******************灰度变换与空间滤波******************/
/******************频域滤波****************************/
/******************图像复原与重建**********************/
/******************彩色图像处理************************/
/******************小波和多分辨率处理******************/
/******************图像压缩****************************/
/******************形态学图像处理**********************/
/******************图像分割****************************/
//////////////////Canny算法///////////////////
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
	cout << "L2gradient(bool,计算图像梯度幅值的标识，默认false)" << endl;
	cin >> L2gradient;

	Canny(image, result, threshold1, threshold2, apertureSize, L2gradient);
}

///////////////////sobel算法/////////////////
void custom_sobel(Mat &image, Mat &result)
{
	int ddepth, dx, dy, ksize = 3, borderType = BORDER_DEFAULT;
	double scale, delta = 0;
	cout << "ddepth(int,输出图像的深度)" << endl;
	cout << "可选：若src.depth() = CV_8U，取ddepth = -1 / CV_16S /CV_32F / CV_64F" << endl;
	cout << "      若src.depth() = CV_16U / CV_16S，取ddepth = -1 / CV_32F / CV_64F" << endl;
	cout << "      若src.depth() = CV_32F，取ddepth = -1 / CV_32F / CV_64F" << endl;
	cout << "      若src.depth() = CV_64F，取ddepth = -1 / CV_64F" << endl;
	cin >> ddepth;
	cout << "dx(int,x方向上的差分阶数)" << endl;
	cin >> dx;
	cout << "y(int,方向上的差分阶数)" << endl;
	cin >> dy;
	cout << "ksize(int,Sobel核的大小，必须从1,3,5,7中选择)" << endl;
	cin >> ksize;
	cout << "scale(double,计算导数时可选的缩放因子，默认1（表示无缩放)" << endl;
	cin >> scale;
	cout << "delta(double,表示在结果存入目标图(结果存放图像)之前可选的delta值，默认0)" << endl;
	cin >> delta;
	cout << "borderType(int,边界模式，默认值为BORDER_DEFAULT)" << endl;
	cin >> borderType;

	Sobel(image, result, ddepth, dx, dy, ksize, scale, delta, borderType);

}
/******************表示和描述**************************/
/******************目标识别****************************/

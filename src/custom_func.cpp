#include <opencv-tools.hpp>

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

#include <opencv-tools.hpp>

int main(int argc, char **argv)
{
	bool canny;
	char *image_path;
	//处理参数
	while(*++argv != NULL && **argv == '-')
	{
		//检查“-”后边的字母
		switch(*++*argv)
		{
			case 'c': //Canny算法
				cout << "Canny" << endl;
				canny = true;
				image_path = *(argv + 1);
				break;
		}
	}

	Mat image, result;
	image = imread(image_path, CV_LOAD_IMAGE_COLOR);
	if( image.empty() )
	{
	  cout << "Read image error" << endl;
	  return 1;
	}

	if(canny == true)
	{
		custom_canny(image, result);
	}


	imshow("Result", result);
	waitKey(0);

	return 0;
}

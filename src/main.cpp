//opencv3.3.0

#include <opencv-tools.hpp>

void select_algorithm(bool *alogrithm);

int main(int argc, char **argv)
{
	bool work_model;  //命令行模式，模式0为命令行模式，模式1为效果叠加模式
	bool work_status = 0; //工作状态，如果是0表示正在工作，如果是1表示退出，主要用在叠加模式里辅助结束程序。
	bool *algorithm = new bool[100];
	char *image_path = NULL;

	//判断模式
	if(*(argv+1) == NULL)
	{
		work_model = 1;
		cout << "===================模式1==================" << endl;
	}
	else
	{
		work_model = 0;
		cout << "===================模式0==================" << endl;
	}

	//模式0：处理参数
	while(*++argv != NULL && **argv == '-' && work_model == 0)
	{
		//检查“-”后边的字母
		switch(*++*argv)
		{
			case 'C': //Canny算法
				cout << "Selected Canny" << endl;
				algorithm[80] = true;
				break;
			case 'S'://Sobel算法
				cout << "Selected Sobel" << endl;
				algorithm[81] = true;
				break;
			case '0'://自定义算法0
				cout << "Selected custome0" << endl;
				algorithm[110] = true;
			case '1'://自定义算法1
				cout << "Selected custome1" << endl;
				algorithm[111] = true;
			case '2'://自定义算法2
				cout << "Selected custome2" << endl;
				algorithm[112] = true;
			case '3'://自定义算法3
				cout << "Selected custome3" << endl;
				algorithm[113] = true;
			case '4'://自定义算法4
				cout << "Selected custome4" << endl;
				algorithm[114] = true;
		}

		image_path = *(argv + 1);
	}

	Mat image, result;

	//若为模式1,在此处读入图片
	if(work_model == 1)
	{
		image_path = new char[100];   //为图片路径开辟内存空间
		cout << "输入图片(路径)：" << endl;
		cin >> image_path;
	}

	image = imread(image_path, CV_LOAD_IMAGE_COLOR);
	if( image.empty() )
	{
	  cout << "Read image error" << endl;
	  return 1;
	}
	if(work_model == 1)
		delete [] image_path;

	
	//算法执行部分,包含模式1的主要操作
	while(1)
	{   
		/******************灰度变换与空间滤波******************/
        /******************频域滤波****************************/
        /******************图像复原与重建**********************/
        /******************彩色图像处理************************/
        /******************小波和多分辨率处理******************/
        /******************图像压缩****************************/
        /******************形态学图像处理**********************/
        /******************图像分割****************************/
		if(work_model == 1)
			select_algorithm(algorithm); //模式1选择算法

	    if(algorithm[80] == true)   //Canny算法
	    {
	    	custom_canny(image, result);
			algorithm[80] == false;
	    }
		if(algorithm[81] == true)   //Sobel算法
	    {
	    	custom_sobel(image, result);
			algorithm[81] == false;
	    }
		/******************表示和描述**************************/
        /******************目标识别****************************/
        /******************自定义算法**************************/
        if(algorithm[110] == true)   //自定义算法0
	    {
	    	custom0(image, result);
			algorithm[110] == false;
	    }
		if(algorithm[111] == true)   //自定义算法1
	    {
	    	custom1(image, result);
			algorithm[111] == false;
	    }
        if(algorithm[112] == true)   //自定义算法2
	    {
	    	custom2(image, result);
			algorithm[112] == false;
	    }
        if(algorithm[113] == true)   //自定义算法3
	    {
	    	custom3(image, result);
			algorithm[113] == false;
	    }
        if(algorithm[114] == true)   //自定义算法4
	    {
	    	custom4(image, result);
			algorithm[114] == false;
	    }



	    imshow("Result", result);
	    waitKey(0);

/******编程过程中遇到cin不起作用的情况，原因是在此前有用到cin的地方，实际输入类型与变量定义类型不符，导致cin相关寄存器改变，进而导致后边所有的cin无法正常使用，详细信息可以参照http://www.youranshare.com/blog/sid/65.html     */
		//cin.clear(); //清除cin的相关状态标志位，即将所有标志位清零-----测试之后没有起到预期效果
		//cin.sync();  //清空输入全部输入缓冲，包括'\n'-----测试之后没有起到预期效果

		if(cin.fail())  //判断输入流是否出现错误
		{
			cout << "Cin error! You should input a right type!" << endl;
			return 1;
		}
/*************************************************************************************************************************************************/

		if(work_model == 1)
		{
			cout << "继续？（0：继续 1：停止）" << endl;
			cin.clear();
			cin.sync();
		    cin  >> work_status;
		}
		else
			work_status = 1;


		if(work_status == 1)
		{
			delete [] algorithm;
			return 0;
		}

	}
}

void select_algorithm(bool *algorithm)
{
	int num; //算法编号
	cout << "******************灰度变换与空间滤波*******************" << endl;
	cout << "10." << endl;


	cout << endl;
	cout << "******************频域滤波*****************************" << endl;
	cout << "20." << endl;


	cout << endl;
	cout << "******************图像复原与重建***********************" << endl;
	cout << "30." << endl;


	cout << endl;
	cout << "******************彩色图像处理*************************" << endl;
	cout << "40." << endl;


	cout << endl;
	cout << "******************小波和多分辨率处理*******************" << endl;
	cout << "50." << endl;


	cout << endl;
	cout << "******************图像压缩*****************************" << endl;
	cout << "60." << endl;


	cout << endl;
	cout << "******************形态学图像处理***********************" << endl;
	cout << "70." << endl;


	cout << endl;
	cout << "******************图像分割*****************************" << endl;
	cout << "80.Canny" << endl;
	cout << "81.Soble" << endl;



	cout << endl;
	cout << "******************表示和描述***************************" << endl;
	cout << "90." << endl;


	cout << endl;
	cout << "******************目标识别*****************************" << endl;
	cout << "100." << endl;


	cout << endl;
	cout << "******************自定义算法***************************" << endl;
	cout << "110.custom0" << endl;
	cout << "111.custom1" << endl;
	cout << "112.custom2" << endl;
	cout << "113.custom3" << endl;
	cout << "114.custom4" << endl;

	cin >> num; //获取算法编号

	algorithm[num] = true;  //算法使能


}

// CarRecgnize.cpp: 定义应用程序的入口点。
//

#include "CarPlateRecgnize.h"
int main()
{

	CarPlateRecgnize p("C:\\Users\\Administrator\\Desktop\\CarTrain\\resource\\HOG_SVM_DATA2.xml",
		"C:\\Users\\Administrator\\Desktop\\CarTrain\\resource\\HOG_ANN_ZH_DATA2.xml",
		"C:\\Users\\Administrator\\Desktop\\CarTrain\\resource\\HOG_ANN_DATA2.xml");
	Mat src = imread("C:\\Users\\Administrator\\Desktop\\CarRecognize\\resource\\test\\test3.jpg");
	cout << p.plateRecgnize(src) << endl;
	waitKey();
	return 0;
}

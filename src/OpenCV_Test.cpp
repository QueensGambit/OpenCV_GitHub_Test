#include <opencv2/core/core.hpp>
#include <opencv2/highgui/highgui.hpp>
#include <opencv2/opencv.hpp>
#include <iostream>

using namespace std;
using namespace cv;

int main()
{

Mat img = imread("media/Lenna.png", CV_LOAD_IMAGE_COLOR);

namedWindow("MyWindow", CV_WINDOW_AUTOSIZE);
imshow("MyWindow", img);

waitKey(0);
return 0;
}

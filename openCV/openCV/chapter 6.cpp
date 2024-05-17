#include<opencv2/imgcodecs.hpp>
#include<opencv2/highgui.hpp>
#include<opencv2/imgproc.hpp>
#include<iostream>


using namespace std;
using namespace cv;

int hmin = 0,smin=0,vmin=0;
int hmax = 179, smax = 255, vmax = 255;


///// color detection
void main() {


	string path = "Resources/shapes.png";
	Mat img = imread(path),imgHSV,mask;
	cvtColor(img, imgHSV, COLOR_BGR2HSV);

	namedWindow("Trackbars", (640, 200));
	createTrackbar("Hue Min", "Trackbars", &hmin, 179);
	createTrackbar("Hue Max", "Trackbars", &hmax, 179);
	createTrackbar("Sat Min", "Trackbars", &smin, 255);
	createTrackbar("Sat Max", "Trackbars", &smax, 255);
	createTrackbar("Val Min", "Trackbars", &vmin, 255);
	createTrackbar("Val Max", "Trackbars", &vmax, 255);

	while (true)
	{
		Scalar lower(hmin, smin, vmin), upper(hmax, smax, vmax);




		inRange(imgHSV, lower, upper, mask);

		imshow("Image", mask);
	
		waitKey(1);
	}


	
	
}
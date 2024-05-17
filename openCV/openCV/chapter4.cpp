#include<opencv2/imgcodecs.hpp>
#include<opencv2/highgui.hpp>
#include<opencv2/imgproc.hpp>
#include<iostream>


using namespace std;
using namespace cv;

// DRAW SHAPES AND TEXT

int main() {

	// Blank image
	
	Mat img(512, 512,CV_8UC3,Scalar(255,255,255));
	
	// The first point is the cordinates of the shape.
	// second one is the size. Third argument is the color and the last one is the thickness.
	circle(img, Point(256, 256), 155, Scalar(0, 69, 255),FILLED/*-1 whioch is filled.*/);

	rectangle(img, Point(130, 226), Point(382, 286), Scalar(255, 255, 255), 12);

	line(img, Point(130, 296), Point(382, 296), Scalar(255, 255, 255),2);

	putText(img, "Arya's Github", Point(137, 262),FONT_HERSHEY_PLAIN,2/*font size */,Scalar(255,255,255),3);

	imshow("Image", img);
	waitKey(0);

	return 0;
}
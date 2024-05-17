#include<opencv2/imgcodecs.hpp>
#include<opencv2/highgui.hpp>
#include<opencv2/imgproc.hpp>
#include<iostream>


using namespace std;
using namespace cv;

int main() {


	string path = "Resources/test.png";
	Mat img = imread(path);
	Mat imgResize;

	// The third argument can be given the exact numbers for width and height
	//The fourth and fifth argument are goog for scaling
	resize(img, imgResize, Size(),0.5,0.5);

	Mat imgCrop;

	// to crop a rectangle in th eimage.
	Rect roi(300, 300,300,250);
	imgCrop = img(roi);

	imshow("Image", img);
	imshow("Image resized", imgResize);
	imshow("Image crop", imgCrop);
	
	waitKey(0);

	return 0;
}
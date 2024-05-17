#include<opencv2/imgcodecs.hpp>
#include<opencv2/highgui.hpp>
#include<opencv2/imgproc.hpp>
#include<iostream>


using namespace std;
using namespace cv;


// Basic functions
int main() {


	string path = "Resources/test.png";
	Mat img = imread(path);
	Mat imgGray;

	//RGB to Gray scale
	cvtColor(img, imgGray, COLOR_BGR2GRAY);
	Mat imagBlur;
	Mat imgCanny,imgDia,imgErode;

	// Blurs the Image
	GaussianBlur(img, imagBlur,Size(7,7),5,0);

	//Finds the edges of the image usin canny algorithm
	Canny(imagBlur, imgCanny, 50, 150);

	// To make the borders thinker or thinner. Value of the kenel determines by how much.
	Mat kernel = getStructuringElement(MORPH_RECT,Size(5,5));
	dilate(imgCanny, imgDia,kernel);
	erode(imgDia, imgErode, kernel);

	imshow("Image", img);
	imshow("Image gray", imgGray);
	imshow("Image BLUR", imagBlur);
	imshow("Image Canny", imgCanny);
	imshow("Image Dilate", imgDia);
	imshow("Image Erode", imgErode);
	waitKey(0);

	return 0;
}
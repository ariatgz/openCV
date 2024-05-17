#include<opencv2/imgcodecs.hpp>
#include<opencv2/highgui.hpp>
#include<opencv2/imgproc.hpp>
#include<iostream>


using namespace std;
using namespace cv;


///// Importing images
/*void main() {


	string path = "Resources/test.png";
	Mat img = imread(path);

	imshow("Image", img);
	waitKey(0);

}*/

///// Importing video
/*void main() {

	VideoCapture cap("Resources/test_video.mp4");
	Mat img;

	while (true) {

		cap.read(img);

		imshow("Image", img);
		waitKey(50);


	}

	

}*/

///// Importing webcam
void main() {

	VideoCapture cap(0);
	Mat img;

	while (true) {

		cap.read(img);

		imshow("Image", img);
		waitKey(10);


	}



}
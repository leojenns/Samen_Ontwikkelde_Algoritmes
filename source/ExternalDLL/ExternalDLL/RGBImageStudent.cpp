#include "RGBImageStudent.h"

RGBImageStudent::RGBImageStudent() : RGBImage() {
	rgbarray =new RGB[1];
	//Throws error without the need to include a header
	//TODO: Nothing
}

RGBImageStudent::RGBImageStudent(const RGBImageStudent &other) : RGBImage(other.getWidth(), other.getHeight()) {
	rgbarray =  other.getpicture();
	//TODO: Create a copy from the other object
}


RGBImageStudent::RGBImageStudent(const int width, const int height) : RGBImage(width, height) {
	rgbarray =new  RGB[(width*height)];
	


	//TODO: Initialize pixel

}

RGBImageStudent::~RGBImageStudent() {
	delete[]rgbarray;
	//TODO: delete allocated objects
}

void RGBImageStudent::set(const int width, const int height) {
	
	RGBImage::set(width, height);
	delete[] rgbarray;
	rgbarray = new RGB[(width*height)];
	//TODO: resize or create a new pixel storage (Don't forget to delete the old storage)
}

void RGBImageStudent::set(const RGBImageStudent &other) {
	RGBImage::set(other.getWidth(), other.getHeight());
	delete[] rgbarray;
	rgbarray = other.getpicture();
	//TODO: resize or create a new pixel storage and copy the object (Don't forget to delete the old storage)
}

void RGBImageStudent::setPixel(int x, int y, RGB pixel) {
	
	
	rgbarray[(y*(getWidth() )) + x] = pixel;
	//TODO: no comment needed :)
}

void RGBImageStudent::setPixel(int i, RGB pixel) {

	rgbarray[i] = pixel;

	/*
	* TODO: set pixel i in "Row-Major Order"
	*
	*
	* Original 2d image (values):
	* 9 1 2
	* 4 3 5
	* 8 7 8
	*
	* 1d representation (i, value):
	* i		value
	* 0		9
	* 1		1
	* 2		2
	* 3		4
	* 4		3
	* 5		5
	* 6		8
	* 7		7
	* 8		8
	*/
}

RGB RGBImageStudent::getPixel(int x, int y) const {
	
	//TODO: no comment needed :)
	return rgbarray[(y*(getWidth() )) + x];
}

RGB RGBImageStudent::getPixel(int i) const {
	//TODO: see setPixel(int i, RGB pixel)
	return rgbarray[i];
}


RGB * RGBImageStudent::getpicture()const {
	return rgbarray;
}
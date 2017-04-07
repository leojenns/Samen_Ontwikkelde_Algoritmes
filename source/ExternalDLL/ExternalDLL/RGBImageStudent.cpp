#include "RGBImageStudent.h"

RGBImageStudent::RGBImageStudent() : RGBImage() {
	rgbarray =new RGB[1];
	
}

RGBImageStudent::RGBImageStudent(const RGBImageStudent &other) : RGBImage(other.getWidth(), other.getHeight()) {
	for (int i = 0; i<(getWidth()*getHeight()); i++) {
		RGB copy = other.getPixel(i);
		setPixel(i, copy);
	}
}


RGBImageStudent::RGBImageStudent(const int width, const int height) : RGBImage(width, height) {
	rgbarray =new  RGB[(width*height)];
	


	

}

RGBImageStudent::~RGBImageStudent() {
	delete[]rgbarray;
	
}

void RGBImageStudent::set(const int width, const int height) {
	
	RGBImage::set(width, height);
	delete[] rgbarray;
	rgbarray = new RGB[(width*height)];
}

void RGBImageStudent::set(const RGBImageStudent &other) {
	RGBImage::set(other.getWidth(), other.getHeight());
	delete[] rgbarray;
	for (int i = 0; i<(getWidth()*getHeight()); i++) {
		RGB copy = other.getPixel(i);
		setPixel(i, copy);
	}
}

void RGBImageStudent::setPixel(int x, int y, RGB pixel) {
	
	
	rgbarray[(y*(getWidth() )) + x] = pixel;
}

void RGBImageStudent::setPixel(int i, RGB pixel) {

	rgbarray[i] = pixel;

	
}

RGB RGBImageStudent::getPixel(int x, int y) const {
	
	return rgbarray[(y*(getWidth() )) + x];
}

RGB RGBImageStudent::getPixel(int i) const {
	return rgbarray[i];
}


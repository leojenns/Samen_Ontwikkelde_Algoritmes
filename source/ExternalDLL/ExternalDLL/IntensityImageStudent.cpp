#include "IntensityImageStudent.h"

IntensityImageStudent::IntensityImageStudent() : IntensityImage() {
	intensityarray = new Intensity[1];
}

IntensityImageStudent::IntensityImageStudent(const IntensityImageStudent &other) : IntensityImage(other.getWidth(), other.getHeight()) {

for(int i = 0; i<(getWidth()*getHeight());i++){
	Intensity copy = other.getPixel(i);
	setPixel(i, copy);
}
}

IntensityImageStudent::IntensityImageStudent(const int width, const int height) : IntensityImage(width, height) {
	intensityarray = new Intensity[(width *height)];
}

IntensityImageStudent::~IntensityImageStudent() {
	delete[] intensityarray;
}

void IntensityImageStudent::set(const int width, const int height) {
	IntensityImage::set(width, height);
	delete[] intensityarray;
	intensityarray = new Intensity[(width*height)];
}

void IntensityImageStudent::set(const IntensityImageStudent &other) {
	IntensityImage::set(other.getWidth(), other.getHeight());
	delete[] intensityarray;
	for (int i = 0; i<(getWidth()*getHeight()); i++) {
		Intensity copy = other.getPixel(i);
		setPixel(i, copy);
	}
}

void IntensityImageStudent::setPixel(int x, int y, Intensity pixel) {
	
	intensityarray[(y*(getWidth())) + x] = pixel;
}

void IntensityImageStudent::setPixel(int i, Intensity pixel) {
	
	intensityarray[i] = pixel;
	

}

Intensity IntensityImageStudent::getPixel(int x, int y) const {
	return intensityarray[(y*(getWidth() )) + x];
}

Intensity IntensityImageStudent::getPixel(int i) const {
	return intensityarray[i];
}

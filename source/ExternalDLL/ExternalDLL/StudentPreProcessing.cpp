#include "StudentPreProcessing.h"
IntensityImage * StudentPreProcessing::stepToIntensityImage(const RGBImage &image) const {
	int width = image.getWidth();
	int height = image.getHeight();
	IntensityImage * grey =new IntensityImageStudent(width,height);
	for (int collum = 0 ;collum  <= height-1 ; collum++) {
		for (int row = 0 ; row <= width-1 ; row++) {
			RGB color = image.getPixel(row, collum);
			Intensity get = color.b ;
			grey->setPixel(row, collum, get);
		}
	}
	return grey;
}

IntensityImage * StudentPreProcessing::stepScaleImage(const IntensityImage &image) const {
	return nullptr;
}

IntensityImage * StudentPreProcessing::stepEdgeDetection(const IntensityImage &image) const {
	return nullptr;
}

IntensityImage * StudentPreProcessing::stepThresholding(const IntensityImage &image) const {
	return nullptr;
}
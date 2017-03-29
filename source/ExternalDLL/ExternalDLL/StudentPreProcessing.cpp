#include "StudentPreProcessing.h"
IntensityImage * StudentPreProcessing::stepToIntensityImage(const RGBImage &image) const {
	ImageFactory::ImplementationStudent fa;
	int width = image.getWidth();
	int height = image.getHeight();
	IntensityImage * grey = fa.newIntensityImage(width,height);
	for (int collum = 0 ;collum  <= height-1 ; collum++) {
		for (int row = 0 ; row <= width-1 ; row++) {
			Intensity  get = image.getPixel(row, collum).g;
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
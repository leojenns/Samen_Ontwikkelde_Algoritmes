#include "StudentPreProcessing.h"
IntensityImage * StudentPreProcessing::stepToIntensityImage(const RGBImage &image) const {
	ImageFactory::ImplementationStudent fa;
	int width = image.getWidth();
	int height = image.getHeight();
	IntensityImage * grey = fa.newIntensityImage(width,height);
	for (int i = 0 ; i < height ; i++) {
		for (int j = 0 ; i < width ; i++) {
			Intensity  get = image.getPixel(i, j).r;
			grey->setPixel(i, j, get);
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
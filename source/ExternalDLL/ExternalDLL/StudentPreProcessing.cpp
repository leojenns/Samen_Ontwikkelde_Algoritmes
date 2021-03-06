#include "StudentPreProcessing.h"
IntensityImage * StudentPreProcessing::stepToIntensityImage(const RGBImage &image) const {
	///function for converting rgb to grayscale 
	///  a intensity image is made by the imagefactory
	///  with the double for loop all the pixels are going off and converted and placed in the itensityimage 
	///
	

	int width = image.getWidth();
	int height = image.getHeight();
	IntensityImage * grey = ImageFactory::newIntensityImage(width,height);
	
	for (int collum = 0 ;collum  <= height-1 ; collum++) {
		for (int row = 0 ; row <= width-1 ; row++) {
			RGB color = image.getPixel(row, collum);
			Intensity get = color.b ;// single color
		  //Intensity get  =  (color.r + color.g + color.b) /3 // average
		  //Intensity get  =  color.r*0.21  + color.g*0.72 + color.b*0.07 // luminosity
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
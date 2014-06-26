#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){

	typedef itk::Image< unsigned short, 3 > ImageType;
	ImageType::Pointer image = ImageType::New();

	cout << "Hello ITK World !" << endl;
}

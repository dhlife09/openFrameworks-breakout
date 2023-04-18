#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
	// window
	ofSetWindowTitle("Breakout");
	ofSetWindowShape(1024, 768);

	// settings
	ofSetFrameRate(30);
	ofBackground(ofColor::white);

	// brush
	ofSetColor(ofColor::black);
	ofSetLineWidth(1.0);
}

//--------------------------------------------------------------
void ofApp::update(){

}

//--------------------------------------------------------------
void ofApp::draw(){
	// brush
	ofSetColor(ofColor::black);
	ofSetLineWidth(10.0);

	// line: (x1, y1, x2, y2)
	ofDrawLine(400, 100, 800, 300);

	// brush
	ofSetColor(ofColor::red);
	ofFill();

	// circle: (x, y, radius)
	ofDrawCircle(200, 300, 100);

	// brush
	ofSetColor(ofColor::green);
	ofNoFill();

	// rectancle: (x, y, width, height)
	ofDrawRectangle(600, 400, 300, 200);

	// brush
	ofSetColor(ofColor::blue);
	ofFill();

	// triangle: (x1, y1, x2, y2, x3, y3)
	ofDrawTriangle(400, 500, 300, 700, 150, 700);
}

//--------------------------------------------------------------
void ofApp::keyPressed(int key){

}

//--------------------------------------------------------------
void ofApp::keyReleased(int key){

}

//--------------------------------------------------------------
void ofApp::mouseMoved(int x, int y ){

}

//--------------------------------------------------------------
void ofApp::mouseDragged(int x, int y, int button){

}

//--------------------------------------------------------------
void ofApp::mousePressed(int x, int y, int button){

}

//--------------------------------------------------------------
void ofApp::mouseReleased(int x, int y, int button){

}

//--------------------------------------------------------------
void ofApp::mouseEntered(int x, int y){

}

//--------------------------------------------------------------
void ofApp::mouseExited(int x, int y){

}

//--------------------------------------------------------------
void ofApp::windowResized(int w, int h){

}

//--------------------------------------------------------------
void ofApp::gotMessage(ofMessage msg){

}

//--------------------------------------------------------------
void ofApp::dragEvent(ofDragInfo dragInfo){ 

}

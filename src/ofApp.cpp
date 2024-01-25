#include "ofApp.h"
#include "../ParticleData.h"
#include "../ParticleEmitter.h"
#include "../BoxGenerator.h"




//--------------------------------------------------------------
void ofApp::setup(){
	gui.setup();
	gui.add(windSlider.setup("Wind strength", ofVec2f(0, 0), ofVec2f(0, 0), ofVec2f(10, 10)));

	emitter.addGenerator(&snowGenerator);	
	emitter.addGenerator(&fireGenerator);	
}

//--------------------------------------------------------------
void ofApp::update(){
	emitter.emit(0.016, &data);
	updater.update(&data, windSlider->x, windSlider->y);
	colSphere.collision(&data);
}

//--------------------------------------------------------------
void ofApp::draw(){
	ofBackgroundGradient(ofColor::lightBlue, ofColor::darkGreen, ofGradientMode::OF_GRADIENT_LINEAR);

	gui.draw();
	cam.begin();
	ofEnableDepthTest();

	for (int i = 0; i < 3000; i++)
	{
		ofSetColor(data.color[i]);
		ofDrawSphere(data.position[i], data.radius[i]);
	}

	ofSetColor(ofColor::lightBlue);
	ofDrawSphere(colSphere.posX, colSphere.posY, colSphere.posZ, colSphere.radius);

	ofDisableDepthTest();
	cam.end();
}

//--------------------------------------------------------------
void ofApp::keyPressed(int key) {
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

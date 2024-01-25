#pragma once

#include "ofxGui.h"

#include "ofMain.h"
#include "../ParticleData.h"
#include "../ParticleEmitter.h"
#include "../BoxGenerator.h"
#include "../CircleGenerator.h"
#include "../Updater.h"
#include "../CollisionSphere.h"

class ofApp : public ofBaseApp{
	ofEasyCam cam;

	ParticleData data;
	ParticleEmitter emitter;
	BoxGenerator snowGenerator;
	CircleGenerator fireGenerator;
	Updater updater;

	CollisionSphere colSphere;

	ofxPanel gui;
	ofxVec2Slider windSlider;


	public:
		void setup();
		void update();
		void draw();

		void keyPressed(int key);
		void keyReleased(int key);
		void mouseMoved(int x, int y );
		void mouseDragged(int x, int y, int button);
		void mousePressed(int x, int y, int button);
		void mouseReleased(int x, int y, int button);
		void mouseEntered(int x, int y);
		void mouseExited(int x, int y);
		void windowResized(int w, int h);
		void dragEvent(ofDragInfo dragInfo);
		void gotMessage(ofMessage msg);
		
};

#include "ofApp.h"

int numBoids = 8192*8;
//--------------------------------------------------------------
void ofApp::setup(){

    for(int i=0;i<numBoids;i++){
        Boid * b = new Boid();
        b->setup();
        boids.push_back(b);
        
    }
    
    //ofSetBackgroundAuto(false);
    ofBackground(255);
}

//--------------------------------------------------------------
void ofApp::update(){
    
    for(int i=0;i<numBoids;i++){
        Boid * b = boids.at(i);
        b->update();
    }
    
}

//--------------------------------------------------------------
void ofApp::draw(){
    for(int i=0;i<numBoids;i++){
        Boid * b = boids.at(i);
        b->draw();
    }
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
    boids.clear();
    setup();
}

//--------------------------------------------------------------
void ofApp::mouseReleased(int x, int y, int button){

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

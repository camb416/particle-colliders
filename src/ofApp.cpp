#include "ofApp.h"

int numBoids = 1024;
//--------------------------------------------------------------
void ofApp::setup(){

    for(int i=0;i<numBoids;i++){
        Boid * b = new Boid();
        b->setup();
        boids.push_back(b);
        
    }
    
     ofSetBackgroundAuto(false);
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
   // ofSetColor(255,255,255,4);
   // ofRect(0,0,ofGetWidth(),ofGetHeight());
    
    
    int lineCount = 0;
    int lineMax = 4096;
    //ofSetPolyMode(OF_POLY_WINDING_NONZERO);
    //ofBeginShape();
    //ofSetColor(0,0,0,32);
    for(int i=0;i<numBoids;i++){
        Boid * b = boids.at(i);
        b->draw();
        //ofLine(boids.at(i)->x, boids.at(i)->y,boids.at(i-1)->x,boids.at(i-1)->y);
       /*
        if(lineCount<lineMax){
        for(int j=0;j<i;j++){
            Boid * b2 = boids.at(j);
           
            if(ofDist(b->x,b->y,b2->x,b2->y)<20){
                lineCount++;
                ofSetColor(j%255,0,255-i%255,32);
                ofLine(b->x,b->y,b2->x,b2->y);
            }
            }
            
        }
        */
    }
  //  ofEndShape();

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

//
//  Boid.cpp
//  explosions
//
//  Created by Cameron Browning on 11/30/14.
//
//

#include "Boid.h"


void Boid::setup(){
    // the boid
    // float x,y;
    // float vX,vY,vF;
    // float r;
    // float size;
    x = ofGetWidth()/2;
    y = ofGetHeight()/2;
    vX = vY = vF = 0;
    aX = aY = aF = 0;
    vR = ofRandomf()*0.1f;
    vF = ofRandomf()*1.0f+3.0f;
    r = ofRandomf()*TWO_PI;
    size = 2;
    o = ofRandomf()*0.75f + 0.25f;
}
void Boid::update(){
   // size *= 0.99f;
    vF *= 0.985f;
    vR *= 0.985f;
    r += vR;
    vX = cos(r)*vF;
    vY = sin(r)*vF;
    
    vX += aX;
    vY += aY;
    
    x += vX;
    y += vY;
}
void Boid::draw(){
    ofEnableAlphaBlending();
    ofSetColor(0,0,0,o*255);
        ofCircle(x,y,size);
}
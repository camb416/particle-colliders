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
    aX = aF = 0;
    aY = 0.1f;
    // vR = ofRandomf()*0.1f;
    vR = 0;
    vF = ofRandomf()*3.0f;
    r = ofRandomf()*TWO_PI;
    size = 2;
    o = 1.0f;//ofRandomf()*0.25f + 0.25f;
    vX = cos(r)*vF;
    vY = sin(r)*vF;
    
    pX = x;
    pY = y;
}
void Boid::update(){
   // size *= 0.99f;

    pX = x;
    pY = y;
    
    //vF *= 0.99f;
    //vR *= 0.99f;
    r += vR;
    //vX = cos(r)*vF;
    //vY = sin(r)*vF;
    
    if(ofGetMousePressed()){
        aF = -128.0f/ MAX(ofDistSquared(x, y, ofGetMouseX(), ofGetMouseY()),64);
        
    } else {
        aF = 0;
    }
    float mouseR = atan2(y-ofGetMouseY(),x-ofGetMouseX());
    aX = cos(mouseR)*aF;
    aY = sin(mouseR)*aF;
    
    
    
    vX += aX;
    vY += aY;
    
    vX *= 0.98f;
    vY *= 0.98f;
    //vF = sqrt(vX*vX+vY*vY);
    //vF*=0.99f;
    
    
    

    
    x += vX;
    y += vY;
    
    if(y+vY>ofGetHeight()){
        y = ofGetHeight();
        vY*=-0.9f;
        vX*=0.9f;
    }
    

    
}
void Boid::draw(){
    ofSetLineWidth(1);
   // ofEnableAlphaBlending();
    // ofSetColor(255,255,255,o*255);
   // ofLine(x-1,y-1,pX-1,pY-1);
    //ofCircle(x-1,y-1,size);
    ofSetColor(0,0,0,o*255);
    //ofCircle(x,y,size);
    ofLine(x,y,pX,pY);
}
//
//  Boid.h
//  explosions
//
//  Created by Cameron Browning on 11/30/14.
//
//

#ifndef __explosions__Boid__
#define __explosions__Boid__

#include <stdio.h>
#include "ofMain.h"

class Boid{
public:
    // the boid
    float x,y;
    float vX,vY,vF;
    float r;
    float size;
    float aX,aY,aF;
    float vR;
    float o;
    float pX,pY;
    
    void setup();
    void draw();
    void update();
};

#endif /* defined(__explosions__Boid__) */

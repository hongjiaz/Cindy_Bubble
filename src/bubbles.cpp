//
//  bubbles.cpp
//  bubbles_
//
//  Created by Hongjia Zhang on 15-4-15.
//
//

#include "bubbles.h"

bubbles::bubbles(){
    pos_1 = ofVec2f(ofGetMouseX(),ofGetMouseY());
    //set mouse follow in
    pos_2 = ofVec2f(500,400);
    //set the bubble's position
    vel = ofVec2f(ofRandom(-5,5),ofRandom(-5,5));
    //set the random distance
    rad = 10;
    //rad is 10
    myColor=ofColor(ofRandom(255),ofRandom(255),ofRandom(255),ofRandom(255));
    //set the my color
    rot=0;
    //rotate is 0
}

void bubbles::setup(){
    
}

void bubbles::update(){
    pos_1 += vel;
    //the 1st bubble's position
    rot+=abs(vel.x);
    //rotate the velocity
    float distance = ofDist(300, 300, pos_1.x, pos_1.y);
    //bubble's distance
    float bright =ofMap(distance, 0, 400, 255, 0);
    //set the bright
    myColor.a = bright;
    //the bright in color
}
void bubbles::draw(){
    ofSetColor(myColor);
    //set the color
    ofPushMatrix();
    //work the matrix
    ofTranslate(pos_1);
    ofRotate(rot);
    //rotate
    ofCircle(0, 0, rad);
    //circle's position
    ofPopMatrix();
    //finish the matrix
    ofPushMatrix();
    //work the matrix
    ofTranslate(pos_2);
    ofRotate(rot);
    //rotate
    ofCircle(0, 0, rad);
    //circle's position
    ofPopMatrix();
    //finish the matrix
}

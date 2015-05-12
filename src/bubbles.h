//
//  bubbles.h
//  bubbles_
//
//  Created by Hongjia Zhang on 15-4-15.
//
//

#ifndef __bubbles___bubbles__
#define __bubbles___bubbles__

#include <ofMain.h>//gives access to openfreamworks
class bubbles {

public:
     bubbles();
    
    void setup();
    //set the setup
    void update();
    //set the update
    void draw();
    //set the draw
    
    ofVec2f pos_1;
    //voctor's position
    ofVec2f pos_2;
    //vector's position
    ofVec2f vel;
    //vector's velocity
    float rad;
    //set the rad
    ofColor myColor;
    //set myclor
    float rot;
    //set the rotate
    float bright;
    //set the brightness
   
};



#endif /* defined(__bubbles___bubbles__) */

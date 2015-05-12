#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
//At the begining of the program, to define the basic code condition.
    ofSetCircleResolution(12);
    //set the resolution equal to 12
    
}

//--------------------------------------------------------------
void ofApp::update(){
//set the update code
    class bubbles tembubble;
    //name tembubble
    bubbles.push_back(tembubble);
    for (int i=0; i<bubbles.size(); i++) {
    //set the number of bubble
  bubbles[i].update();
  //prepare to set the update code
    float distance = ofDist(800, 800, bubbles[i].pos_1.x,bubbles[i].pos_1.y);
    //bubble's distance
    if(distance>1000) {
    //the maxmum distance
        bubbles.erase(bubbles.begin()+1);
        //clean the show up bubbles
        i--;
        
    }
}
}
//--------------------------------------------------------------
    void ofApp::draw(){
    //To work on the code.
    
    for (int i=0; i<bubbles.size(); i++) {
    //the size of the bubbles
        bubbles[i].draw();
        //draw the bubble
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

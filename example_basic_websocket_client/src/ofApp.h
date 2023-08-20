#pragma once

#include "ofMain.h"
#include "ofxHTTP.h"

class ofApp : public ofBaseApp {

    public:
        void setup();
        void exit();
        void draw();
    
        void keyReleased(int key);

        void switchToScene(string _scene);

        Poco::Net::WebSocket* m_psock;

};

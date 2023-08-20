// =============================================================================
//
// Copyright (c) 2013 Christopher Baker <http://christopherbaker.net>
//
// Permission is hereby granted, free of charge, to any person obtaining a copy
// of this software and associated documentation files (the "Software"), to deal
// in the Software without restriction, including without limitation the rights
// to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
// copies of the Software, and to permit persons to whom the Software is
// furnished to do so, subject to the following conditions:
//
// The above copyright notice and this permission notice shall be included in
// all copies or substantial portions of the Software.
//
// THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
// IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
// FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
// AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
// LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
// OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN
// THE SOFTWARE.
//
// =============================================================================


#pragma once


#include "ofMain.h"
#include "ofxJSONElement.h"
#include "ofxHTTP.h"
#include "ofxCrypto.h"

//using namespace ofx;

#define NUM_MESSAGES 30 // how many past ws messages we want to keep

class ofApp: public ofBaseApp {

    public:
        void setup();
        void update();
        void draw();

        ofxHTTP::SimpleWebSocketServer wsServer;
        void onWebSocketOpenEvent(ofxHTTP::WebSocketEventArgs& evt);
        void onWebSocketCloseEvent(ofxHTTP::WebSocketCloseEventArgs& evt);
        void onWebSocketFrameReceivedEvent(ofxHTTP::WebSocketFrameEventArgs& evt);
        void onWebSocketFrameSentEvent(ofxHTTP::WebSocketFrameEventArgs& evt);
        void onWebSocketErrorEvent(ofxHTTP::WebSocketErrorEventArgs& evt);

        int wsPort = 7112;

        ofColor bgColor;

};

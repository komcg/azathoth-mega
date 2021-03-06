// Header for MaxBotix LV-MaxSonar Interface
#ifndef _SONAR_H_
#define _SONAR_H_

#include <Arduino.h>


// How long to wait, in uS, for a sonar return.
// The sensor times out after 37500 uS, corresponding to a range
// of about 250"
#define SONAR_TIMEOUT 37500

// Scaling factor, microseconds per inch
#define SONAR_SCALE 147

class Sonar {
  public:
    Sonar();
    void enable();
    void disable();
    void update();
    void ping();
    byte getRange();
    void handle(byte, byte*);
  private:
    int _lastrange;
};

#endif
  

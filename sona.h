#ifndef sona_h
#define sona_h

#include "Arduino.h"

#define mm 0
#define cm 1
#define m 2
#define raw 3   

class sona
{
private:
    uint8_t t;
    uint8_t e;
    uint8_t p;
    uint8_t y;
public:
    sona(uint8_t trig, uint8_t echo, uint8_t type = cm);
    long read();
};

#endif  
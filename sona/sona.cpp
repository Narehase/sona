#include "sona.h"

sona::sona(uint8_t trig, uint8_t echo, uint8_t type = cm) {
    t = trig;
    e = echo;
    y = type;
    pinMode(t, OUTPUT);
    pinMode(e, INPUT);
}

long sona::read() {
    digitalWrite(t, 0);
    delayMicroseconds(2);
    digitalWrite(t, 1);
    delayMicroseconds(10);
    digitalWrite(t, 0);
    long dec = pulseIn(e, 1);
    switch (y)
    {
    case cm:
        p = dec * 17 / 1000;
        break;
    
    case mm:
        p = (dec * 17 / 1000)*0.1;
        break;
    case m:
        p = (dec * 17 / 1000)*10.;
        break;
    case raw:
        p = dec;
        break;
    default:
        break;
    }
    return p;
}

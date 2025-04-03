#ifndef GBFREQ_H
#define GBFREQ_H

#include "Arduino.h"
#include "GBClock.h"

namespace gb
{
    struct Frequency
    {
    public:

        void setup(int hz, float th = 0.5);

        bool pulse();

        void setHz(int hz);

        int getHz();

        void setTh(float th);

        float getTh();

    private:

        int hz = 25;
        float t = 1/25;
        float th = 0.5;

        Clock c1;
    };
}

#endif
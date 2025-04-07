#ifndef GBFREQ_H
#define GBFREQ_H

#include "Arduino.h"
#include "GBClock.h"

namespace gb
{
    //This struct generates a frequency pulse.
    struct Frequency
    {
    public:

        //Set frequency (Hz) as integer value and time high  as float value (1.0 = 100%, 0.0 = 0%)
        //By default th = 50%
        void setup(int hz, float th = 0.5);

        //Read if pulse is high or low
        bool pulse();

        //Set frequency (Hz) as an integer value
        void setHz(int hz);

        //Get frecuency (Hz) as an integer value
        int getHz();

        //Set time high as float value (1.0 = 100%, 0.0 = 0%)
        void setTh(float th);

        //Get time high as float value
        float getTh();

    private:

        int hz = 25;
        float t = 1/25;
        float th = 0.5;

        Clock c1;
    };
}

#endif
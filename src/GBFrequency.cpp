#include "GBFrequency.h"

void gb::Frequency::setup(int _hz, float _th)
{
    th = _th;
    hz = _hz;
    t = 1000.0f / hz;
    c1.start();
}

bool gb::Frequency::pulse()
{
    unsigned long elapsed = c1.elapsed();

    if (elapsed >= t && elapsed <= t + t * th)
    {
        return true;
    }

    if (elapsed > t + t * th)
    {
        c1.start();
    }

    return false;
}

void gb::Frequency::setHz(int _hz)
{
    hz = _hz;
}

int gb::Frequency::getHz()
{
    return hz;
}

void gb::Frequency::setTh(float _th)
{
    th = _th;
}

float gb::Frequency::getTh()
{
    return th;
}
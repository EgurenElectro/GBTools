#include "GBClock.h"

void gb::Clock::start() 
{
    startTime = millis();
    running = true;
}

void gb::Clock::stop() 
{
    running = false;
}

bool gb::Clock::check(unsigned long mark) 
{
    if (!running) return false;
    return millis() - startTime >= mark;
}

unsigned long gb::Clock::elapsed() 
{
    return running ? millis() - startTime : 0;
}


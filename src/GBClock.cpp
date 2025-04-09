#include "GBClock.h"
#include "GBStringUtils.h"

void gb::Clock::start() 
{
    startTime = millis();
    running = true;
}

unsigned long gb::Clock::stop() 
{
    running = false;
    return millis() - startTime;
}

unsigned long gb::Clock::restart()
{
    unsigned long elapsed = stop();
    start();
    return elapsed;
}

bool gb::Clock::check(unsigned long mark) 
{
    if (!running) return false;
    
    return millis() - startTime >= mark;
}

unsigned long gb::Clock::elapsed() 
{
    if(running) return millis() - startTime;
    else return 0;
}

bool gb::Clock::started()
{
    return running;
}
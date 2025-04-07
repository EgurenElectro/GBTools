#ifndef GBCLOCK_H
#define GBCLOCK_H

#include "Arduino.h"

namespace gb
{
  //Stop Run Clock, useful for delays and waitings in your Arduino programs.
  //Uses milliseconds as time measure.
  struct Clock
  {
  public:

    //Start counting.
    void start();

    //Stop counting
    unsigned long stop();

    //Stop and then start counting again.
    unsigned long restart();

    //Check if the clock has reached a mark time (in ms).
    bool check(unsigned long mark);

    //Get ms elapsed since the start.
    unsigned long elapsed();

    //Get if this clock has been started.
    bool started();

  private:

    unsigned long startTime = 0;
    bool running = false;
    
  };

}


#endif

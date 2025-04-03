#ifndef GBCLOCK_H
#define GBCLOCK_H

#include "Arduino.h"

namespace gb
{
  struct Clock
  {
  public:

    void start();

    unsigned long stop();

    unsigned long restart();

    bool check(unsigned long mark);

    unsigned long elapsed();

    bool started();

  private:

    unsigned long startTime = 0;
    bool running = false;
    
  };

}


#endif

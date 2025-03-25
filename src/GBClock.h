#ifndef GBCLOCK_H
#define GBCLOCK_H

#include "Arduino.h"

namespace gb
{
  struct Clock
  {
  public:

    void start();

    void stop();

    bool check(unsigned long mark);

    unsigned long elapsed();

  private:

    unsigned long startTime = 0;
    bool running = false;
    
  };

}


#endif

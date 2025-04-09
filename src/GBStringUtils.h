#ifndef GBUTILS_H
#define GBUTILS_H

#include "Arduino.h"

namespace gb
{
    String* Split(String str, char c, unsigned int& length);
}

#endif
#ifndef kt_gpio_h
#define kt_gpio_h

#include <IO.h>

template<IO::pin>
class Pin
{
  public:
    static inline void output()
    {
      pinMode(pin, OUTPUT);
    }
 
  private:
    int value;

};


#endif
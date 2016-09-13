//          Copyright Felipe Magno de Almeida 2016.
// Distributed under the Boost Software License, Version 1.0.
//    (See accompanying file LICENSE_1_0.txt or copy at
//          http://www.boost.org/LICENSE_1_0.txt)

#ifdef __AVR_DEVICE_NAME__
#if __AVR_DEVICE_NAME__ == atmega2560
#include <avr-traits/atmega2560/adc.hpp>
#else
#error Unknown -mmcu option
#endif
#else
#error No device defined in -mmcu option?
#endif


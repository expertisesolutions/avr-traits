//          Copyright Felipe Magno de Almeida 2016.
// Distributed under the Boost Software License, Version 1.0.
//    (See accompanying file LICENSE_1_0.txt or copy at
//          http://www.boost.org/LICENSE_1_0.txt)

#ifndef AVR_TRAITS_AVR_TRAITS_ATMEGA2560_ADC_HPP
#define AVR_TRAITS_AVR_TRAITS_ATMEGA2560_ADC_HPP

namespace avr_traits {

template <int Offset>
struct adc_port_traits;

static const unsigned int adc_ports = 16;

inline void adc_port_set_admux(int port)
{
  switch(port)
  {
  case 0:
  case 1:
  case 2:
  case 3:
  case 4:
  case 5:
  case 6:
  case 7:
    ADMUX &= 0xE0;
    ADMUX |= port;
    break;
  }
}

// Doesn't make sense to reset it
inline void adc_port_reset_admux()
{
}

template <>
struct adc_port_traits<0>
{
    static volatile uint16_t* input_pointer()
    {
        return &ADC;
    }
    static void set_admux()
    {
        ADMUX &= 0xE0;
        ADMUX |= 0x00;
    }
    static int const adc_pin = 0;
};

// ANALOG PORT 1
template<>
struct adc_port_traits<1>
{
    static volatile uint16_t* input_pointer()
    {
        return &ADC;
    }
    static void set_admux()
    {
        ADMUX &= 0xE0;
        ADMUX |= 0x01;
    }
    static int const adc_pin = 1;
};

// ANALOG PORT 2
template<>
struct adc_port_traits<2>
{
    static volatile uint16_t* input_pointer()
    {
        return &ADC;
    }
    static void set_admux()
    {
        ADMUX &= 0xE0;
        ADMUX |= 0x02;
    }
    static int const adc_pin = 2;
};

// ANALOG PORT 3
template<>
struct adc_port_traits<3>
{
    static volatile uint16_t* input_pointer()
    {
        return &ADC;
    }
    static void set_admux()
    {
        ADMUX &= 0xE0;
        ADMUX |= 0x03;
    }
    static int const adc_pin = 3;
};

// ANALOG PORT 4
template<>
struct adc_port_traits<4>
{
    static volatile uint16_t* input_pointer()
    {
        return &ADC;
    }
    static void set_admux()
    {
        ADMUX &= 0xE0;
        ADMUX |= 0x04;
    }
    static int const adc_pin = 4;
};

// ANALOG PORT 5
template<>
struct adc_port_traits<5>
{
    static volatile uint16_t* input_pointer()
    {
        return &ADC;
    }
    static void set_admux()
    {
        ADMUX &= 0xE0;
        ADMUX |= 0x05;
    }
    static int const adc_pin = 5;
};

// ANALOG PORT 6
template<>
struct adc_port_traits<6>
{
    static volatile uint16_t* input_pointer()
    {
        return &ADC;
    }
    static void set_admux()
    {
        ADMUX &= 0xE0;
        ADMUX |= 0x06;
    }
    static int const adc_pin = 6;
};

// ANALOG PORT 7
template<>
struct adc_port_traits<7>
{
    static volatile uint16_t* input_pointer()
    {
        return &ADC;
    }
    static void set_admux()
    {
        ADMUX &= 0xE0;
        ADMUX |= 0x07;
    }
    static int const adc_pin = 7;
};

typedef adc_port_traits<0> analog0;
typedef adc_port_traits<1> analog1;
typedef adc_port_traits<2> analog2;
typedef adc_port_traits<3> analog3;
typedef adc_port_traits<4> analog4;
typedef adc_port_traits<5> analog5;
typedef adc_port_traits<6> analog6;
typedef adc_port_traits<7> analog7;
  
}

#endif


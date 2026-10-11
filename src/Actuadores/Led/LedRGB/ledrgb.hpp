#ifndef LEDRGB_HPP
#define LEDRGB_HPP

#include <Arduino.h>
#include "../led.hpp"

class LedRGB : public Led {
    private:
        int _pinRojo;
        int _pinVerde;
        int _pinAzul;
        byte _rojo;
        byte _verde;
        byte _azul;

    public:
        LedRGB(const char* nombre, int pinRojo, int pinVerde, int pinAzul,
               bool estado, byte rojo, byte verde, byte azul);
        void begin() override;
        void encender() override;
        void apagar() override;
        void ajustarColor(byte rojo, byte verde, byte azul);
};

#endif

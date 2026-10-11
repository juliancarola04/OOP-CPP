#ifndef MOTORPWM_HPP
#define MOTORPWM_HPP

#include <Arduino.h>
#include "../motor.hpp"

class MotorPWM : public Motor {
    private:
        int _pin;
        byte _velocidad;
    public:
        MotorPWM(const char* nombre, int pin, bool estado, byte velocidad);
        void begin() override;
        void encender() override;
        void apagar() override;
        void ajustarVelocidad(byte velocidad);
};

#endif

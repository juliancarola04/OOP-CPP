#ifndef MOTORONOFF_HPP
#define MOTORONOFF_HPP

#include "../motor.hpp"

class MotorOnOff : public Motor {
    private:
        int _pin;
    public:
        MotorOnOff(const char* nombre, int pin, bool estado);
        void begin() override;
        void encender() override;
        void apagar() override;
};

#endif

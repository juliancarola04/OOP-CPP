#ifndef LEDONOFF_HPP
#define LEDONOFF_HPP

#include "../led.hpp"

class LedOnOff : public Led{
    private:
        int _pin;

    public:
        LedOnOff(const char* nombre, int pin, bool estado);
        void begin() override;
        void encender() override final;
        void apagar() override final;
};

#endif

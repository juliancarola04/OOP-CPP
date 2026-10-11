#ifndef RELEONOFF_HPP
#define RELEONOFF_HPP

#include "../rele.hpp"

class ReleOnOff : public Rele {
    private:
        int _pin;
        bool _activoEnBajo;
    public:
        ReleOnOff(const char* nombre, int pin, bool estado, bool activoEnBajo);
        void begin() override;
        void encender() override;
        void apagar() override;
};

#endif

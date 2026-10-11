#ifndef LED_HPP
#define LED_HPP

#include "../actuador.hpp"

class Led : public IActuador{
    protected:
        bool _estado;
    public:
        Led(const char* nombre, bool estado);
        void begin() override;
        void virtual encender() = 0;
        void virtual apagar() = 0;
};

#endif

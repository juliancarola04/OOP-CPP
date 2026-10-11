#ifndef MOTOR_HPP
#define MOTOR_HPP

#include "../actuador.hpp"

class Motor : public IActuador {
    protected:
        bool _estado;
    public:
        Motor(const char* nombre, bool estado);
        virtual void encender() = 0;
        virtual void apagar() = 0;
};

#endif

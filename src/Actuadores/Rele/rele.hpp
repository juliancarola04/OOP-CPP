#ifndef RELE_HPP
#define RELE_HPP

#include "../actuador.hpp"

class Rele : public IActuador {
    protected:
        bool _estado;
    public:
        Rele(const char* nombre, bool estado);
        virtual void encender() = 0;
        virtual void apagar() = 0;
};

#endif

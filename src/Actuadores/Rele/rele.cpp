#include "rele.hpp"

Rele::Rele(const char* nombre, bool estado) : IActuador(nombre) {
    this->_estado = estado;
}

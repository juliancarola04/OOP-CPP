#include <Arduino.h>
#include "actuador.hpp"

IActuador::IActuador(const char* nombre) {
    strncpy(this->_nombre, nombre, LARGO_NOMBRE);
    this->_nombre[LARGO_NOMBRE-1] = 0;
}

IActuador::~IActuador(){}

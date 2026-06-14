#include <Arduino.h>
#include "actuador.hpp"

IActuador::IActuador(char nombre[LARGO_NOMBRE], int pin) : _pin(pin){
    strncpy(this->_nombre, nombre, LARGO_NOMBRE);
    this->_nombre[LARGO_NOMBRE-1] = 0;
}

IActuador::~IActuador(){}

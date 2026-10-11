#include <Arduino.h>
#include "releonoff.hpp"

ReleOnOff::ReleOnOff(const char* nombre, int pin, bool estado, bool activoEnBajo)
    : Rele(nombre, estado) {
    this->_pin = pin;
    this->_activoEnBajo = activoEnBajo;
}

void ReleOnOff::begin() {
    if (this->_estado) {
        encender();
    } else {
        apagar();
    }
    pinMode(this->_pin, OUTPUT);
}

void ReleOnOff::encender() {
    digitalWrite(this->_pin, this->_activoEnBajo ? LOW : HIGH);
    this->_estado = true;
}

void ReleOnOff::apagar() {
    digitalWrite(this->_pin, this->_activoEnBajo ? HIGH : LOW);
    this->_estado = false;
}

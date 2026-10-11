#include <Arduino.h>
#include "motoronoff.hpp"

MotorOnOff::MotorOnOff(const char* nombre, int pin, bool estado)
    : Motor(nombre, estado) {
    this->_pin = pin;
}

void MotorOnOff::begin() {
    if (this->_estado) {
        encender();
    } else {
        apagar();
    }
    pinMode(this->_pin, OUTPUT);
}

void MotorOnOff::encender() {
    digitalWrite(this->_pin, HIGH);
    this->_estado = true;
}

void MotorOnOff::apagar() {
    digitalWrite(this->_pin, LOW);
    this->_estado = false;
}

#include "motorpwm.hpp"

MotorPWM::MotorPWM(const char* nombre, int pin, bool estado, byte velocidad)
    : Motor(nombre, estado) {
    this->_pin = pin;
    this->_velocidad = velocidad;
}

void MotorPWM::begin() {
    pinMode(this->_pin, OUTPUT);
    if (this->_estado) {
        encender();
    } else {
        apagar();
    }
}

void MotorPWM::encender() {
    analogWrite(this->_pin, this->_velocidad);
    this->_estado = true;
}

void MotorPWM::apagar() {
    analogWrite(this->_pin, 0);
    this->_estado = false;
}

void MotorPWM::ajustarVelocidad(byte velocidad) {
    this->_velocidad = velocidad;
    if (this->_estado) {
        analogWrite(this->_pin, this->_velocidad);
    }
}

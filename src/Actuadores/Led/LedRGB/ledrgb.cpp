#include "ledrgb.hpp"

LedRGB::LedRGB(const char* nombre, int pinRojo, int pinVerde, int pinAzul,
               bool estado, byte rojo, byte verde, byte azul)
    : Led(nombre, estado) {
    this->_pinRojo = pinRojo;
    this->_pinVerde = pinVerde;
    this->_pinAzul = pinAzul;
    this->_rojo = rojo;
    this->_verde = verde;
    this->_azul = azul;
}

void LedRGB::begin() {
    pinMode(this->_pinRojo, OUTPUT);
    pinMode(this->_pinVerde, OUTPUT);
    pinMode(this->_pinAzul, OUTPUT);
    Led::begin();
}

void LedRGB::encender() {
    analogWrite(this->_pinRojo, this->_rojo);
    analogWrite(this->_pinVerde, this->_verde);
    analogWrite(this->_pinAzul, this->_azul);
    this->_estado = true;
}

void LedRGB::apagar() {
    analogWrite(this->_pinRojo, 0);
    analogWrite(this->_pinVerde, 0);
    analogWrite(this->_pinAzul, 0);
    this->_estado = false;
}

void LedRGB::ajustarColor(byte rojo, byte verde, byte azul) {
    this->_rojo = rojo;
    this->_verde = verde;
    this->_azul = azul;
    if (this->_estado) {
        encender();
    }
}

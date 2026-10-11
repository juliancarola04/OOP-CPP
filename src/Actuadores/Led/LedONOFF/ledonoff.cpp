#include <Arduino.h>
#include "ledonoff.hpp"

LedOnOff::LedOnOff(const char* nombre, int pin, bool estado) : Led(nombre, estado){
    this->_pin = pin;
}

void LedOnOff::begin(){
    pinMode(this->_pin, OUTPUT);
    Led::begin();
}

void LedOnOff::encender(){
    digitalWrite(this->_pin, HIGH);
    this->_estado = true;
}

void LedOnOff::apagar(){
    digitalWrite(this->_pin, LOW);
    this->_estado = false;
}

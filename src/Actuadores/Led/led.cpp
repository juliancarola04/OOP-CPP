#include <Arduino.h>
#include "led.hpp"

Led::Led(char nombre[LARGO_NOMBRE], int pin, bool estado) : IActuador(nombre, pin){
    this->_estado = estado;
}

void Led::begin(){
    pinMode(this->_pin, OUTPUT);
    if(this->_estado){
        encender();
    } else {
        apagar();
    }
}
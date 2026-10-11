#include <Arduino.h>
#include "led.hpp"

Led::Led(const char* nombre, bool estado) : IActuador(nombre){
    this->_estado = estado;
}

void Led::begin(){
    if(this->_estado){
        encender();
    } else {
        apagar();
    }
}
#include <Arduino.h>
#include "ledonoff.hpp"

LedOnOff::LedOnOff(char nombre[LARGO_NOMBRE], int pin, bool estado, unsigned long intervalo) : Led (nombre, pin, estado){
    this->_intervalo = intervalo;
    this->_tiempoPasado = 0;
}

void LedOnOff::encender(){
    digitalWrite(this->_pin, HIGH);
    this->_estado = true;
}

void LedOnOff::apagar(){
    digitalWrite(this->_pin, LOW);
    this->_estado = false;
}

void LedOnOff::actualizar(){
    this->_tiempoActual = millis();

    if (this->_tiempoActual - this->_tiempoPasado >= this->_intervalo){
        this->_tiempoPasado = this->_tiempoActual;
        if(this->_estado){
            apagar();
        } else{
            encender();
        }
    }
}

void LedOnOff::ajustarIntervalo(unsigned long intervalo){
    this->_intervalo = intervalo;
}

unsigned long LedOnOff::getTiempoActual(){
    return this->_tiempoActual;
}

unsigned long LedOnOff::getTiempoPasado(){
    return this->_tiempoPasado;
}

unsigned long LedOnOff::getIntervalo(){
    return this->_intervalo;
}
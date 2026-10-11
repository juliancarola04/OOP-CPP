#include <Arduino.h>
#include "reletemporizado.hpp"

ReleTemporizado::ReleTemporizado(const char* nombre, int pin, bool estado, bool activoEnBajo,
                                unsigned long tiempoOn, unsigned long tiempoOff)
    : ReleOnOff(nombre, pin, estado, activoEnBajo) {
    this->_tiempoOn = tiempoOn;
    this->_tiempoOff = tiempoOff;
    this->_tiempoPasado = 0;
}

void ReleTemporizado::encender() {
    ReleOnOff::encender();
    this->_tiempoPasado = millis();
}

void ReleTemporizado::apagar() {
    ReleOnOff::apagar();
    this->_tiempoPasado = millis();
}

void ReleTemporizado::actualizar() {
    unsigned long tiempoActual = millis();
    unsigned long intervalo = this->_estado ? this->_tiempoOn : this->_tiempoOff;
    if (tiempoActual - this->_tiempoPasado >= intervalo) {
        if (this->_estado) {
            apagar();
        } else {
            encender();
        }
    }
}

void ReleTemporizado::ajustarTiempos(unsigned long tiempoOn, unsigned long tiempoOff) {
    this->_tiempoOn = tiempoOn;
    this->_tiempoOff = tiempoOff;
    this->_tiempoPasado = millis();
}

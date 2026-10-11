#include "motor.hpp"

Motor::Motor(const char* nombre, bool estado) : IActuador(nombre) {
    this->_estado = estado;
}

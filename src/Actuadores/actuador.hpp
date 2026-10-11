#ifndef ACTUADOR_HPP
#define ACTUADOR_HPP

#define LARGO_NOMBRE 30
class IActuador {
    protected:
        char _nombre[LARGO_NOMBRE];
    
    public:
        IActuador(const char* nombre);
        virtual ~IActuador();
        virtual void begin() = 0;
};

#endif

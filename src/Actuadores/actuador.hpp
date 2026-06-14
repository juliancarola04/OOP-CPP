#define LARGO_NOMBRE 30
class IActuador {
    protected:
        int _pin;   
        char _nombre[LARGO_NOMBRE];
    
    public:
        IActuador(char nombre[LARGO_NOMBRE], int pin);
        virtual ~IActuador();
        virtual void begin() = 0;
};
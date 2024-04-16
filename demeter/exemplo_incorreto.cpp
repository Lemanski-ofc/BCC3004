class Motor {
public:
    void start() {
        // Inicia o motor
    }
};

class Carro {
public:
    Motor* motor;

    Carro(): motor(new Motor()) {}

    Motor* getMotor() {
        return motor;
    }
};

class Aplicacao {
public:
    void run() {
        Carro* carro = new Carro();
        carro->getMotor()->start(); // Violação da Lei de Demeter
    }
};
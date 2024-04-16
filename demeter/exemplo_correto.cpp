class Motor {
public:
    void start() {
        // Inicia o motor
    }
};

class Carro {
private:
    Motor* motor;
public:
    Carro(): motor(new Motor()) {}

    void startMotor() {
        motor->start();
    }
};

class Aplicacao {
public:
    void run() {
        Carro* carro = new Carro();
        carro->startMotor(); // Segue a Lei de Demeter
    }
};
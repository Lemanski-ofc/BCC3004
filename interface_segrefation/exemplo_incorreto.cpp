// Interface que não está bem segregada
class IWorker {
public:
    virtual void work() = 0;
    virtual void eat() = 0;
};

class HumanWorker : public IWorker {
public:
    void work() override {
        // Trabalha
    }

    void eat() override {
        // Come
    }
};

class RobotWorker : public IWorker {
public:
    void work() override {
        // Trabalha
    }

    void eat() override {
        // Robots não comem, mas são forçados a implementar este método
    }
};
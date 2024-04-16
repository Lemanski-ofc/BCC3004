// Interfaces bem segregadas
class IWorker {
public:
    virtual void work() = 0;
};

class IEater {
public:
    virtual void eat() = 0;
};

class HumanWorker : public IWorker, public IEater {
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
};
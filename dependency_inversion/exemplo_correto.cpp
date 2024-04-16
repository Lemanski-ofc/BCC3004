// Interface de abstração
class IDatabase {
public:
    virtual void connect() = 0;
    virtual void disconnect() = 0;
};

// Classe de baixo nível
class MySQLDatabase : public IDatabase {
public:
    void connect() override {
        // Conecta ao banco de dados MySQL
    }

    void disconnect() override {
        // Desconecta do banco de dados MySQL
    }
};

// Classe de alto nível
class Application {
private:
    IDatabase& database;
public:
    Application(IDatabase& db): database(db) {}

    void start() {
        database.connect();
        // Outras operações
        database.disconnect();
    }
};
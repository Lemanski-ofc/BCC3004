// Classe de baixo nível
class MySQLDatabase {
public:
    void connect() {
        // Conecta ao banco de dados MySQL
    }

    void disconnect() {
        // Desconecta do banco de dados MySQL
    }
};

// Classe de alto nível
class Application {
private:
    MySQLDatabase database;
public:
    Application(): database() {}

    void start() {
        database.connect();
        // Outras operações
        database.disconnect();
    }
};
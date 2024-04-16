class Employee {
public:
    string name;
    string address;

    Employee(string name, string address): name(name), address(address) {}

    void save() {
        // Salva o empregado no banco de dados
    }

    void showDetails() {
        // Mostra os detalhes do empregado
    }
};
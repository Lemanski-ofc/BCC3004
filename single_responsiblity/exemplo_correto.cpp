class Employee {
public:
    string name;
    string address;

    Employee(string name, string address): name(name), address(address) {}

    void showDetails() {
        // Mostra os detalhes do empregado
    }
};

class EmployeeDatabase {
public:
    void save(Employee employee) {
        // Salva o empregado no banco de dados
    }
};
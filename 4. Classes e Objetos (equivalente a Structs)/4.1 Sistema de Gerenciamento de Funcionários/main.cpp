#include <iostream>
#include <vector>
#include <string>

class Funcionario {
public:
    std::string nome;
    int id;
    double salario;
    std::string departamento;

    Funcionario(std::string n, int i, double s, std::string d)
        : nome(n), id(i), salario(s), departamento(d) {}

    void imprimirDados() const {
        std::cout << "ID: " << id << ", Nome: " << nome
                  << ", Salario: R$" << salario
                  << ", Departamento: " << departamento << std::endl;
    }
};

double calcularSalarioDepartamento(const std::vector<Funcionario>& lista, const std::string& departamento) {
    double total = 0.0;
    for (const auto& f : lista) {
        if (f.departamento == departamento) {
            total += f.salario;
        }
    }
    return total;
}

int main() {
    std::vector<Funcionario> funcionarios;
    int opcao;

    do {
        std::cout << "\nMenu:\n";
        std::cout << "1 - Cadastrar funcionario\n";
        std::cout << "2 - Calcular total de salarios de um departamento\n";
        std::cout << "3 - Listar todos os funcionarios\n";
        std::cout << "0 - Sair\n";
        std::cout << "Escolha: ";
        std::cin >> opcao;
        std::cin.ignore();

        if (opcao == 1) {
            std::string nome, departamento, entrada;
            int id;
            double salario;

            std::cout << "Nome: ";
            std::getline(std::cin, nome);

            std::cout << "ID: ";
            std::getline(std::cin, entrada);
            id = std::stoi(entrada);

            std::cout << "Salario: ";
            std::getline(std::cin, entrada);
            salario = std::stod(entrada);

            std::cout << "Departamento: ";
            std::getline(std::cin, departamento);

            funcionarios.emplace_back(nome, id, salario, departamento);

        } else if (opcao == 2) {
            std::string departamento;
            std::cout << "Digite o nome do departamento: ";
            std::getline(std::cin, departamento);
            double total = calcularSalarioDepartamento(funcionarios, departamento);
            std::cout << "Total de salarios do departamento '" << departamento << "': R$" << total << std::endl;

        } else if (opcao == 3) {
            std::cout << "\nFuncionarios cadastrados:\n";
            for (const auto& f : funcionarios) {
                f.imprimirDados();
            }
        }

    } while (opcao != 0);

    return 0;
}

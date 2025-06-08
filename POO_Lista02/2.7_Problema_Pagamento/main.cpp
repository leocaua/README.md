#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

class Funcionario {
private:
    string nome;
    double valorHora;
    double horasTrabalhadas;

public:
    Funcionario(string nome, double valorHora, double horasTrabalhadas) {
        this->nome = nome;
        this->valorHora = valorHora;
        this->horasTrabalhadas = horasTrabalhadas;
    }

    double calcularPagamento() const {
        return valorHora * horasTrabalhadas;
    }

    string getNome() const {
        return nome;
    }
};

int main() {
    string nome;
    double valorHora, horas;

    cout << "Nome do funcionario: ";
    getline(cin, nome);
    cout << "Valor por hora: ";
    cin >> valorHora;
    cout << "Horas trabalhadas: ";
    cin >> horas;

    Funcionario f(nome, valorHora, horas);
    double pagamento = f.calcularPagamento();

    cout << fixed << setprecision(2);
    cout << "Pagamento do funcionario " << f.getNome() << " = R$ " << pagamento << endl;

    return 0;
}


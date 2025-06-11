#include <iostream>
#include <iomanip>
using namespace std;

class AumentoSalarial {
private:
    double salarioAtual, novoSalario, aumento;
    int percentual;

public:
    void lerSalario() {
        cout << "Digite o salario atual: R$ ";
        cin >> salarioAtual;
    }

    void calcularAumento() {
        if (salarioAtual <= 1000.00) {
            percentual = 20;
        } else if (salarioAtual <= 3000.00) {
            percentual = 15;
        } else if (salarioAtual <= 8000.00) {
            percentual = 10;
        } else {
            percentual = 5;
        }

        aumento = salarioAtual * percentual / 100.0;
        novoSalario = salarioAtual + aumento;
    }

    void exibirResultado() {
        cout << fixed << setprecision(2);
        cout << "Novo salario: R$ " << novoSalario << endl;
        cout << "Aumento: R$ " << aumento << endl;
        cout << "Percentual de aumento: " << percentual << "%" << endl;
    }
};

int main() {
    AumentoSalarial funcionario;
    funcionario.lerSalario();
    funcionario.calcularAumento();
    funcionario.exibirResultado();
    return 0;
}

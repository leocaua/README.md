#include <iostream>
#include <iomanip>
using namespace std;

class PlanoTelefonia {
private:
    int minutosConsumidos;
    const double precoPlano = 50.0;
    const int minutosInclusos = 100;
    const double precoExcedente = 2.0;

public:
    void lerMinutos() {
        cout << "Digite a quantidade de minutos consumidos: ";
        cin >> minutosConsumidos;
    }

    double calcularValor() {
        if (minutosConsumidos <= minutosInclusos) {
            return precoPlano;
        } else {
            int excedente = minutosConsumidos - minutosInclusos;
            return precoPlano + excedente * precoExcedente;
        }
    }

    void exibirValor() {
        cout << fixed << setprecision(2);
        cout << "Valor a pagar: R$ " << calcularValor() << endl;
    }
};

int main() {
    PlanoTelefonia plano;
    plano.lerMinutos();
    plano.exibirValor();
    return 0;
}

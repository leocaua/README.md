#include <iostream>
#include <iomanip>
using namespace std;

class Lanchonete {
private:
    int codigo;
    int quantidade;

public:
    void lerDados() {
        cout << "Digite o codigo do produto: ";
        cin >> codigo;
        cout << "Digite a quantidade: ";
        cin >> quantidade;
    }

    void calcularValor() {
        double preco = 0.0;

        switch (codigo) {
            case 1: preco = 5.00; break;
            case 2: preco = 3.50; break;
            case 3: preco = 4.80; break;
            case 4: preco = 8.90; break;
            case 5: preco = 7.32; break;
            default:
                cout << "Código invalido" << endl;
                return;
        }

        double total = preco * quantidade;
        cout << fixed << setprecision(2);
        cout << "Valor total: R$ " << total << endl;
    }
};

int main() {
    Lanchonete pedido;
    pedido.lerDados();
    pedido.calcularValor();
    return 0;
}

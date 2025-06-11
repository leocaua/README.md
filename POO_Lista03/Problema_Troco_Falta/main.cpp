#include <iostream>
#include <iomanip>
using namespace std;

class Troco {
private:
    double precoUnitario;
    int quantidade;
    double dinheiroRecebido;

public:
    void lerDados() {
        cout << "Digite o preco unitario do produto: ";
        cin >> precoUnitario;
        cout << "Digite a quantidade comprada: ";
        cin >> quantidade;
        cout << "Digite o valor em dinheiro recebido: ";
        cin >> dinheiroRecebido;
    }

    void calcularTroco() {
        double total = precoUnitario * quantidade;
        cout << fixed << setprecision(2);

        if (dinheiroRecebido >= total) {
            double troco = dinheiroRecebido - total;
            cout << "Troco: R$ " << troco << endl;
        } else {
            double falta = total - dinheiroRecebido;
            cout << "Dinheiro insuficiente. Faltam: R$ " << falta << endl;
        }
    }
};

int main() {
    Troco venda;
    venda.lerDados();
    venda.calcularTroco();
    return 0;
}

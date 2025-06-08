#include <iostream>
#include <iomanip>
using namespace std;

class Troco {
private:
    double precoUnitario;
    int quantidade;
    double dinheiroRecebido;

public:
    Troco(double precoUnitario, int quantidade, double dinheiroRecebido) {
        this->precoUnitario = precoUnitario;
        this->quantidade = quantidade;
        this->dinheiroRecebido = dinheiroRecebido;
    }

    double calcularTotal() const {
        return precoUnitario * quantidade;
    }

    double calcularTroco() const {
        return dinheiroRecebido - calcularTotal();
    }
};

int main() {
    double preco;
    int quantidade;
    double dinheiro;

    cout << "Preco unitario do produto: ";
    cin >> preco;
    cout << "Quantidade comprada: ";
    cin >> quantidade;
    cout << "Dinheiro recebido: ";
    cin >> dinheiro;

    Troco troco(preco, quantidade, dinheiro);

    cout << fixed << setprecision(2);
    cout << "TROCO = " << troco.calcularTroco() << endl;

    return 0;
}


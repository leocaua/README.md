#include <iostream>
#include <iomanip>
using namespace std;

class Terreno {
private:
    double largura;
    double comprimento;
    double valorMetro;

public:
    Terreno(double l, double c, double v) {
        largura = l;
        comprimento = c;
        valorMetro = v;
    }

    double calcularArea() const {
        return largura * comprimento;
    }

    double calcularPreco() const {
        return calcularArea() * valorMetro;
    }
};

int main() {
    double largura, comprimento, valorMetro;

    cout << "Digite a largura do terreno: ";
    cin >> largura;
    cout << "Digite o comprimento do terreno: ";
    cin >> comprimento;
    cout << "Digite o valor do metro quadrado: ";
    cin >> valorMetro;

    Terreno terreno(largura, comprimento, valorMetro);

    cout << fixed << setprecision(2);
    cout << "Area do terreno = " << terreno.calcularArea() << endl;
    cout << "Preco do terreno = " << terreno.calcularPreco() << endl;

    return 0;
}


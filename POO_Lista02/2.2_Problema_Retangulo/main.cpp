#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

class Retangulo {
private:
    double base;
    double altura;

public:
    Retangulo(double b, double h) {
        base = b;
        altura = h;
    }

    double calcularArea() const {
        return base * altura;
    }

    double calcularPerimetro() const {
        return 2 * (base + altura);
    }

    double calcularDiagonal() const {
        return sqrt(base * base + altura * altura);
    }
};

int main() {
    double base, altura;

    cout << "Digite a base do retangulo: ";
    cin >> base;
    cout << "Digite a altura do retangulo: ";
    cin >> altura;

    Retangulo retangulo(base, altura);

    cout << fixed << setprecision(4);
    cout << "AREA = " << retangulo.calcularArea() << endl;
    cout << "PERIMETRO = " << retangulo.calcularPerimetro() << endl;
    cout << "DIAGONAL = " << retangulo.calcularDiagonal() << endl;

    return 0;
}


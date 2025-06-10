#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

class EquacaoSegundoGrau {
private:
    double a, b, c;

public:
    void lerCoeficientes() {
        cout << "Digite os coeficientes a, b e c: ";
        cin >> a >> b >> c;
    }

    void calcularRaizes() {
        double delta = b * b - 4 * a * c;

        cout << fixed << setprecision(4);

        if (a == 0) {
            cout << "Coeficiente 'a' não pode ser zero em uma equação de segundo grau." << endl;
        } else if (delta < 0) {
            cout << "Esta equacao nao possui raizes reais." << endl;
        } else {
            double x1 = (-b + sqrt(delta)) / (2 * a);
            double x2 = (-b - sqrt(delta)) / (2 * a);
            cout << "X1 = " << x1 << endl;
            cout << "X2 = " << x2 << endl;
        }
    }
};

int main() {
    EquacaoSegundoGrau equacao;
    equacao.lerCoeficientes();
    equacao.calcularRaizes();
    return 0;
}

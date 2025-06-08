#include <iostream>
#include <iomanip>
using namespace std;

class Medidas {
private:
    double a, b, c;

public:
    Medidas(double a, double b, double c) {
        this->a = a;
        this->b = b;
        this->c = c;
    }

    double areaQuadrado() const {
        return a * a;
    }

    double areaTrianguloRetangulo() const {
        return (a * b) / 2.0;
    }

    double areaTrapezio() const {
        return ((a + b) * c) / 2.0;
    }
};

int main() {
    double a, b, c;

    cout << "Digite as tres medidas A, B e C:" << endl;
    cin >> a >> b >> c;

    Medidas m(a, b, c);

    cout << fixed << setprecision(4);
    cout << "AREA DO QUADRADO = " << m.areaQuadrado() << endl;
    cout << "AREA DO TRIANGULO = " << m.areaTrianguloRetangulo() << endl;
    cout << "AREA DO TRAPEZIO = " << m.areaTrapezio() << endl;

    return 0;
}


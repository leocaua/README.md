#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

class Circulo {
private:
    double raio;

public:
    Circulo(double r) {
        raio = r;
    }

    double calcularArea() const {
        const double PI = 3.14159;
        return PI * pow(raio, 2);
    }
};

int main() {
    double raio;

    cout << "Digite o valor do raio do circulo: ";
    cin >> raio;

    Circulo circulo(raio);

    cout << fixed << setprecision(3);
    cout << "AREA = " << circulo.calcularArea() << endl;

    return 0;
}


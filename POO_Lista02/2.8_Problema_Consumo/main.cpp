#include <iostream>
#include <iomanip>
using namespace std;

class Carro {
private:
    double distancia;
    double combustivel;

public:
    Carro(double distancia, double combustivel) {
        this->distancia = distancia;
        this->combustivel = combustivel;
    }

    double calcularConsumoMedio() const {
        return distancia / combustivel;
    }
};

int main() {
    double distanciaPercorrida, combustivelGasto;

    cout << "Distancia percorrida (km): ";
    cin >> distanciaPercorrida;
    cout << "Combustivel gasto (litros): ";
    cin >> combustivelGasto;

    Carro carro(distanciaPercorrida, combustivelGasto);

    cout << fixed << setprecision(3);
    cout << "Consumo medio = " << carro.calcularConsumoMedio() << " km/l" << endl;

    return 0;
}


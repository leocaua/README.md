#include <iostream>
#include <iomanip>
using namespace std;

class ConversorTemperatura {
private:
    char escala;
    double temperatura;

public:
    void lerDados() {
        cout << "Digite a escala da temperatura (C para Celsius, F para Fahrenheit): ";
        cin >> escala;
        escala = toupper(escala);

        if (escala != 'C' && escala != 'F') {
            cout << "Escala invalida. Use C ou F." << endl;
            exit(1);  // Sai do programa
        }

        cout << "Digite a temperatura: ";
        cin >> temperatura;
    }

    void converterExibir() {
        cout << fixed << setprecision(2);

        if (escala == 'C') {
            double fahrenheit = temperatura * 9.0 / 5.0 + 32;
            cout << temperatura << " Celsius = " << fahrenheit << "Fahrenheit" << endl;
        } else {
            double celsius = (temperatura - 32) * 5.0 / 9.0;
            cout << temperatura << " Fahrenheit = " << celsius << " Celsius" << endl;
        }
    }
};

int main() {
    ConversorTemperatura conversor;
    conversor.lerDados();
    conversor.converterExibir();
    return 0;
}

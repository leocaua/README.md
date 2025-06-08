#include <iostream>
#include <iomanip>
using namespace std;

class Duracao {
private:
    int totalSegundos;

public:
    Duracao(int segundos) {
        totalSegundos = segundos;
    }

    int getHoras() const {
        return totalSegundos / 3600;
    }

    int getMinutos() const {
        return (totalSegundos % 3600) / 60;
    }

    int getSegundos() const {
        return totalSegundos % 60;
    }

    void imprimirFormato() const {
        cout << "DURACAO = ";
        cout << getHoras() << ":"
             << setw(2) << setfill('0') << getMinutos() << ":"
             << setw(2) << setfill('0') << getSegundos() << endl;
    }
};

int main() {
    int segundos;

    cout << "Digite a duracao em segundos: ";
    cin >> segundos;

    Duracao d(segundos);
    d.imprimirFormato();

    return 0;
}


#include <iostream>
#include <iomanip>
using namespace std;

class Pessoa {
private:
    string nome;
    int idade;

public:
    Pessoa(string n, int i) {
        nome = n;
        idade = i;
    }

    int getIdade() const {
        return idade;
    }

    string getNome() const {
        return nome;
    }
};

int main() {
    string nome1, nome2;
    int idade1, idade2;

    cout << "Dados da primeira pessoa:" << endl;
    cout << "Nome: ";
    getline(cin, nome1);
    cout << "Idade: ";
    cin >> idade1;
    cin.ignore();

    cout << "Dados da segunda pessoa:" << endl;
    cout << "Nome: ";
    getline(cin, nome2);
    cout << "Idade: ";
    cin >> idade2;

    Pessoa pessoa1(nome1, idade1);
    Pessoa pessoa2(nome2, idade2);

    double media = (pessoa1.getIdade() + pessoa2.getIdade()) / 2.0;

    cout << fixed << setprecision(1);
    cout << "A idade media de " << pessoa1.getNome() << " e " << pessoa2.getNome()
         << " = " << media << " anos." << endl;

    return 0;
}


#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

class Contato {
public:
    std::string nome;
    std::string telefone;
    std::string email;

    Contato(std::string n, std::string t, std::string e)
        : nome(n), telefone(t), email(e) {}

    void imprimirDados() const {
        std::cout << "Nome: " << nome << ", Telefone: " << telefone << ", Email: " << email << std::endl;
    }
};

void listarContatos(const std::vector<Contato>& contatos) {
    if (contatos.empty()) {
        std::cout << "Nenhum contato cadastrado.\n";
    } else {
        std::cout << "\nLista de Contatos:\n";
        for (const auto& c : contatos) {
            c.imprimirDados();
        }
    }
}

void buscarContato(const std::vector<Contato>& contatos, const std::string& nomeBusca) {
    bool encontrado = false;
    for (const auto& c : contatos) {
        if (c.nome == nomeBusca) {
            std::cout << "Telefone: " << c.telefone << "\nEmail: " << c.email << std::endl;
            encontrado = true;
            break;
        }
    }
    if (!encontrado) {
        std::cout << "Contato não encontrado.\n";
    }
}

int main() {
    std::vector<Contato> contatos;
    int opcao;

    do {
        std::cout << "\nMenu:\n";
        std::cout << "1 - Adicionar contato\n";
        std::cout << "2 - Listar contatos\n";
        std::cout << "3 - Buscar contato por nome\n";
        std::cout << "0 - Sair\n";
        std::cout << "Escolha: ";
        std::cin >> opcao;
        std::cin.ignore();

        if (opcao == 1) {
            if (contatos.size() >= 10) {
                std::cout << "Agenda cheia! Máximo de 10 contatos.\n";
                continue;
            }

            std::string nome, telefone, email;

            std::cout << "Nome: ";
            std::getline(std::cin, nome);

            std::cout << "Telefone: ";
            std::getline(std::cin, telefone);

            std::cout << "Email: ";
            std::getline(std::cin, email);

            contatos.emplace_back(nome, telefone, email);
            std::cout << "Contato adicionado!\n";

        } else if (opcao == 2) {
            listarContatos(contatos);

        } else if (opcao == 3) {
            std::string nomeBusca;
            std::cout << "Digite o nome do contato: ";
            std::getline(std::cin, nomeBusca);
            buscarContato(contatos, nomeBusca);
        }

    } while (opcao != 0);

    return 0;
}


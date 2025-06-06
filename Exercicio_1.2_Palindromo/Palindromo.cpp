#include "Palindromo.h"
#include <algorithm>
#include <cctype>

bool Palindromo::Palindromos(const std::string& texto) {
    std::string filtrado;

    for (char c : texto) {
        if (!std::isspace(c)) {
            filtrado += std::tolower(c);
        }
    }

    std::string reverso = filtrado;
    std::reverse(reverso.begin(), reverso.end());
    return filtrado == reverso;
}

#include "Palindromo.h"
#include <algorithm>
#include <cctype>

bool Palindromo::ehPalindromo(const std::string& str) {
    std::string limpa;
    for (char c : str) {
        if (std::isalnum(static_cast<unsigned char>(c)))
            limpa += std::tolower(c);
    }
    std::string invertida = limpa;
    std::reverse(invertida.begin(), invertida.end());
    return limpa == invertida;
}

cmake_minimum_required(VERSION 3.31)
project(Metodos_Equivalente_Funcoes)

set(CMAKE_CXX_STANDARD 20)

add_executable(Metodos_Equivalente_Funcoes main.cpp
        POO_Lista01/Exercicio_1.3_Fatorial/main.cpp
        POO_Lista01/Exercicio_1.4_Conversor_Temperatura/main.cpp
        "2. Arrays Multidimensionais (equivalente a Matrizes)/2.1 Maior e Menor Elemento em uma Matriz/main.cpp"
        "2. Arrays Multidimensionais (equivalente a Matrizes)/2.2 Soma das Diagonais de uma Matriz Quadrada/main.cpp"
        "3. Manipulação de Objetos e Referências/3.1 Manipulando Dados de um Objeto/main.cpp"
        "3. Manipulação de Objetos e Referências/3.2 Trocando Valores entre Objetos (simulado)/main.cpp"
        "4. Classes e Objetos (equivalente a Structs)/4.1 Sistema de Gerenciamento de Funcionários/main.cpp"
        "4. Classes e Objetos (equivalente a Structs)/4.2 Agenda de Contatos/main.cpp"
)

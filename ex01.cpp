#include <iostream>

int main() {
    int c, thisIsAVariable, q76354, number;

    std::cout << "Escreva um número inteiro: ";
    std::cin >> number; // o livro falou variável age, mas ia dar erro.

    if (number != 7) 
        std::cout << "O número não é igual a 7.";
    
    std::cout << "Este é um programa em C++";
    std::cout << "Este é um programa em \nC++";
    std::cout << "Este \né \num \nprograma \nem \nC++";
    std::cout << "Este\té\tum\tprograma\tem\tC++";


    return 0;
}
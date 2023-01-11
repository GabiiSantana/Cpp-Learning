#include <iostream>

int main() {
    int num1, num2, sum; // declarando 3 váriaveis

    std::cout << "Digite um número: "; // input
    std::cin >> num1; // recebendo o valor do input
    std::cout << "Digite outro número: "; // input
    std::cin >> num2; // recebendo outro valor do input
    sum = num1 + num2; // somando
    std::cout << "A soma é " << sum << std::endl; // imprimindo o resultado na tela

    return 0; // terminando o código
};
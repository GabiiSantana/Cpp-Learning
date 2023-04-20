#include <iostream>

int main() {
    int soma = 0;

    for (int number; number <= 100; ++number) {
        soma += number;
    }

    std::cout << "A soma de todos os números de 0 a 100 são: " << soma;
}

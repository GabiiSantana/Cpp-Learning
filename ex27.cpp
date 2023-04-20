#include <iostream>

int main() {
    int x, y, i = 1, power = 1; 

    std::cout<< "Digite o valor (inteiro) da base: ";
    std::cin >> x;

    std::cout << "Digite o valor (inteiro) do expoente: ";
    std::cin >> y;

    while (i <= y) {
        power *= x;
        i++;
    }

    std::cout << power;
    return 0;
}
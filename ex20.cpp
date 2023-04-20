#include <iostream>

int main() {
    int numero1, numero2;

    std::cout << "Escreva 2 números inteiros: ";
    std::cin >> numero1 >> numero2;

    std::cout << "SOMA: " << numero1 + numero2 << "\nSUBTRAÇÃO: " << numero1 - numero2 << "\nMULTIPLICAÇÃO: " << numero1 * numero2 << "\nDIVISÃO: " << numero1 / numero2;

    return 0;
}
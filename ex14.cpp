#include <iostream>

int main() {
    int number;

    std::cout << "Digite um número com 5 digitos: ";
    std::cin >> number;

    int digit1 = number / 10000;
    int digit2 = (number % 10000) / 1000;
    int digit3 = (number % 1000) / 100;
    int digit4 = (number % 100) / 10;
    int digit5 = number % 10;

    std::cout << digit1 << "   " << digit2 << "   " << digit3 << "   " << digit4 << "   " << digit5; 
}
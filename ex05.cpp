#include <iostream>

int main() {
    int num1, num2;
    
    std::cout << "Digite dois números: ";
    std::cin >> num1 >> num2;

    if (num1 > num2) 
        std::cout << num1 << " é o maior.";
    if (num2 > num1)
        std::cout << num2 << " é o maior.";
    if (num1 == num2)
        std::cout << "Esses números são iguais.";
}


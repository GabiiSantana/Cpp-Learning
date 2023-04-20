#include <iostream>

int main() {
    int num1, num2;
    
    std::cout << "Escreva dois números: ";
    std::cin >> num1 >> num2;

    if(num1 % num2 == 0)
        std::cout << num1 << " É multiplo de " << num2;
    else
        std::cout << num1 << " Não é multiplo de " << num2;
        
    return 0;
}
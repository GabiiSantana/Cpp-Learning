#include <iostream>

int main() {
    int x = 5;
    int product = 5;
    int quotient = 5;

    product *= x++;
    x = 5;
    quotient /= ++x;


    std::cout << "Valor final de product: " << product;
    std::cout << "\n Valor final de quotient: " << quotient;
    std::cout << "\n Valor final de x: " << x;
}

//product *= x++;
//quotient /= ++x;

//product = 25; x = 6;
//quotient = 0; x = 6;
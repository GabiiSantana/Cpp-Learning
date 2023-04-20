#include <iostream>

int main() {
    int sum = 0, x = 1;
    
    while (x != 11) {
        sum += x;
        x++;
    }

    std::cout << "A soma de 1 ate 10: " << sum;
}
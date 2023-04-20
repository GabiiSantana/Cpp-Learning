#include <iostream>

int main() {
    for (int x = 0; x <= 20; x++) {
        std::cout << x;
        if (x % 5 == 0) {
            std::cout << std::endl;            
        } else {
            std::cout << '\t';
        }
    }
}
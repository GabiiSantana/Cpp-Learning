#include <iostream>

int main() {
    int x = 0;

    while (x <= 20) {
        std::cout << x;

        if (x % 5 == 0)
            std::cout << std::endl;
        else {
            std::cout << '\t';
        }
    }
}
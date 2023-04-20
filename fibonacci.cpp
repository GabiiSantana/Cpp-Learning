#include <iostream>

int main() {
    unsigned long long int number, limit, number_pass, fibonacci, counter;
    number = 1;
    number_pass = 0;
    counter = 1;

    std::cout << "Wherever the sequence goes? ";
    std::cin >> limit;

    std::cout << '\n' << "FIBONACCI SEQUENCE =================" << '\n';

    while (counter < limit) {
        fibonacci = number_pass + number;

        std::cout << number_pass << " + " << number << " = " << fibonacci << '\n';

        number_pass = number;
        number = fibonacci;
        ++counter;
    }
    
    return 0;
}                                                          
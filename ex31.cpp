#include <iostream>

int main ( )
{
    int y, x = 1, total = 0;

    while ( x <= 10 ) {
        y = x * x;
        std::cout << y << " ";
        total += y;
        ++x;
    }

    std::cout << "O total é " << total;
    return 0;
}
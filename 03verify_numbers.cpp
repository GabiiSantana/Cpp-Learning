#include <iostream>

void verify_numbers() {
    int number1;
    int number2;
    char aswer;

    std::cout << "Digit one number: ";
    std::cin >> number1;

    std::cout << "Digit other number: ";
    std::cin >> number2;

    std::cout << "\nDIGIT [A] FOR ADDITION \nDIGIT [B] FOR DIVISION \nDIGIT [C] FOR MULTIPLICATION \nDIGIT [D] FOR BIGGER AND SMALLER\nDIGIT [E] FOR SEE ALL\n=> ";
    std::cin >> aswer;
    aswer = toupper(aswer);
    if (aswer == 'A') {
        std::cout << "SUM: " << number1 + number2;        
    } else if (aswer == 'B') {
        std::cout << "DIVISION: " << number1 / number2;
    } else if (aswer == 'C') {
        std::cout << "MULTIPLICATION: " << number1 * number2;
    } else if (aswer == 'D') {
        if (number1 > number2) {
            std::cout << number1 << " is bigger than " << number2;
        } else if (number1 == number2) {
            std::cout << number1 << " is equal than " << number2;
        } else {
            std::cout << number2 << " is smaller than " << number1;
        }
    } else if (aswer == 'E') {
        std::cout << "\nSUM: " << number1 + number2;
        std::cout << "\nDIVISION: " << number1 / number2;
        std::cout << "\nMULTIPLICATION: " << number1 * number2 << "\n";
        if (number1 > number2) {
            std::cout << number1 << " is bigger than " << number2;
        } else if (number1 == number2) {
            std::cout << number1 << " is equal than " << number2;
        } else {
            std::cout << number2 << " is smaller than " << number1;
        }
    } else {
        std::cout << "ERROR";
    }
}

int main() {
    verify_numbers();
    return 0;
}
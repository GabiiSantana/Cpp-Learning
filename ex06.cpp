#include <iostream>

int main() {
    int num1, num2, num3, soma, media, mt;
    std::cout << "Digite três números inteiros: ";
    std::cin >> num1 >> num2 >> num3;

    soma = num1 + num2 + num3;
    media = (num1 + num2 + num3) / 3;
    mt = num1 * num2 * num3;

    std::cout << "SOMA: " << soma << "\n";
    std::cout << "MÉDIA: " << media << "\n";
    std::cout << "PRODUTO: " << mt << "\n";


    if (num1 < num2 and num1 < num3)
        std::cout << num1 << " É o menor" << "\n";
    if (num2 < num1 and num2 < num3)
        std::cout << num2 << " É o menor" << "\n";
    if (num3 < num1 and num3 < num2)
        std::cout << num3 << " É o menor" << "\n";
    if (num1 == num2 and num1 == num3)
        std::cout << "Todos os números são iguais." << "\n";

    if (num1 > num2 and num1 > num3)
        std::cout << num1 << " É o maior" << "\n";
    if (num2 > num1 and num2 > num3)
        std::cout << num2 << " É o maior" << "\n";
    if (num3 > num1 and num3 > num2)
        std::cout << num3 << " É o maior" << "\n";

    return 0;
}
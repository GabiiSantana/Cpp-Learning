#include <iostream>

int main() {
    char grade;
    int aCount = 0, bCount = 0, cCount = 0, dCount = 0, fCount = 0;

    std::cout << "Digite uma letra de acordo com a sua nota: ";
    std::cout << "\nDigite EOF se quiser terminar a entrada de dados\n";

    while(std::cin >> grade) {
        switch(grade) {
            case 'A':
            case 'a':
                ++aCount;
                break;

            case 'B':
            case 'b':
                ++bCount;
                break;

            case 'C':
            case 'c':
                ++cCount;
                break;

            case 'D':
            case 'd':
                ++dCount;
                break;

            case 'F':
            case 'f':
                ++fCount;
                break;

            default:
                std::cout << "Letra incorreta, por favor, tente novamente\n";
                continue;
        }
    }

    std::cout << "\n\nOs totais para cada nota representada por letra são:\nA: " << aCount << "\nB: " << bCount << "\nC: " << cCount << "\nD: " << dCount << "\nF: " << fCount;

    return 0;
}
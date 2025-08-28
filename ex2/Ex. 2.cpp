#include <iostream>

double calcularPotencia(double base, int expoente) {
    double resultado = 1.0;
    if (expoente >= 0) {
        for (int i = 0; i < expoente; ++i) {
            resultado *= base;
        }
    } else {
        for (int i = 0; i > expoente; --i) {
            resultado /= base;
        }
    }
    return resultado;
}

int main() {
    double base;
    int expoente;

    std::cout << "Digite a base: ";
    std::cin >> base;

    std::cout << "Digite o expoente: ";
    std::cin >> expoente;

    double resultado = calcularPotencia(base, expoente);

    std::cout << "O resultado de " << base << " elevado a " << expoente << " e: " << resultado << std::endl;

    return 0;
}

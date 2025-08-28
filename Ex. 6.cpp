#include <iostream>
#include <string>
using namespace std;

string diaSemana(int numero) {
    switch (numero) {
        case 1: return "Domingo";
        case 2: return "Segunda-feira";
        case 3: return "Ter�a-feira";
        case 4: return "Quarta-feira";
        case 5: return "Quinta-feira";
        case 6: return "Sexta-feira";
        case 7: return "S�bado";
        default: return "N�mero inv�lido (digite de 1 a 7)";
    }
}

int main() {
    int n;

    cout << "Digite um numero (1-7): ";
    cin >> n;

    cout << "Dia da semana: " << diaSemana(n) << endl;

    return 0;
}

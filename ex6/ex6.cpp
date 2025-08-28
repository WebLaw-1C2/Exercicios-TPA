#include <iostream>
#include <string>
using namespace std;

string diaSemana(int numero) {
    switch (numero) {
        case 1: return "Domingo";
        case 2: return "Segunda-feira";
        case 3: return "Terça-feira";
        case 4: return "Quarta-feira";
        case 5: return "Quinta-feira";
        case 6: return "Sexta-feira";
        case 7: return "Sábado";
        default: return "Número inválido (digite de 1 a 7)";
    }
}

int main() {
    int n;

    cout << "Digite um numero (1-7): ";
    cin >> n;

    cout << "Dia da semana: " << diaSemana(n) << endl;

    return 0;
}

#include <iostream>
#include <string>
#include <cctype>  

using namespace std;


bool Vogal(char c) {
    c = tolower(c);  
    return (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u');
}


bool Consoante(char c) {
    c = tolower(c);
    return (isalpha(c) && !Vogal(c));
}

int main(int argc, char const *argv[]) 
{
    string nome;
    
    cout << "Digite o nome completo: ";
    getline(cin, nome);  

    int vogais = 0, consoantes = 0;

    for (char c : nome)
    {
        if (Vogal(c)) 
        {
            vogais++;
        } 
        else if (Consoante(c)) 
        {
            consoantes++;
        }
    }

    cout << "\nNome: " << nome;
    cout << "\nQuantidade de vogais: " << vogais;
    cout << "\nQuantidade de consoantes: " << consoantes;

    return 0;
}

#include <iostream>
#include <string>
#include <algorithm>

using namespace std;
	
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

bool inverter (string texto){
	string inverso = texto;
	reverse(inverso.begin(), inverso.end());
	
	if	(inverso == texto)
	{
		return true;
	}
	else
	{
		return false;
	}
}

int main(int argc, char** argv) 
{
	string texto, resultado;
	cout<<"-- Verificador de palindromos --";
	
	cout<<"\nInsira uma palavra: ";
	cin >> texto;
	
	if (inverter(texto))
	{
		cout<< texto <<" e um palindromo";
	}
	else
	{
		cout<< texto <<" nao e um palindromo";
	}
	return 0;
}

#include <iostream>
using namespace std;

bool impares (int contagem, int numeral){
	if ((contagem % 2) != 0){
		return true;
	} 
	
}
int main(int argc, char** argv) {
	int numeral, soma = 0;
	
	cout << "insira um valor: ";
	cin >> numeral;
	
	for (int contagem = 0; contagem < numeral; contagem ++){
		
		if (impares(contagem,numeral))
		{
			soma += contagem;
		}
		
	}
  	
  		

	cout << "insira um valor: " << soma;
	return 0;
}

//Bruno Amorim
/*Quest�o - 1) Observe o trecho de c�digo abaixo: int INDICE = 13, SOMA = 0, K = 0; 
Enquanto K < INDICE fa�a { K = K + 1; SOMA = SOMA + K; }
Imprimir(SOMA); 
Ao final do processamento, qual ser� o valor da vari�vel SOMA?*/
//Resposta: O valor da vari�vel SOMA ser� 91, conforme o codigo abaixo. 

#include<iostream>
using namespace std;
int main (){
	int indice = 13, soma = 0, k = 0;
	
	do{
		k = k + 1;
		soma = soma + k;
	} while (k < indice);
	
	cout << "Soma = " << soma << "\n\n\n";
	
	return 0;
}

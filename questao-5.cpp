//Bruno Amorim
/*Quest�o - 5) Escreva um programa que inverta os caracteres de um string.
IMPORTANTE: 
a) Essa string pode ser informada atrav�s de qualquer entrada de sua prefer�ncia ou pode ser previamente definida no c�digo; 
b) Evite usar fun��es prontas, como, por exemplo, reverse; */

#include<iostream>
using namespace std;
int main () {
	char palavra[10], inverso[10];
	
	cout << "Digite uma palavra: ";
	for(int i = 0; i < 10; i++){
		cin >> palavra[i];
	}
	
	for(int i = 10; i >= 0; i--){
		for(int j = 0; j <= 10; j++){
			inverso[j] = palavra[i];
		}
		cout << inverso[i];
	}
	
	
	return 0;
}

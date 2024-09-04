//Bruno Amorim
/*Questão - 4) Dado o valor de faturamento mensal de uma distribuidora, detalhado por estado: 
• SP – R$67.836,43 
• RJ – R$36.678,66 
• MG – R$29.229,88 
• ES – R$27.165,48 
• Outros – R$19.849,53 
Escreva um programa na linguagem que desejar onde calcule o percentual de representação 
que cada estado teve dentro do valor total mensal da distribuidora.*/

#include<iostream>
using namespace std;
int main (){
	float sp, rj, mg, es, outros, total;
	sp = 67836.43;
	rj = 36678.66;
	mg = 29229.88;
	es = 27165.48;
	outros = 19849.53;
	total = sp + rj + mg + es + outros;
	sp = (67836.43/total)*100.0;
	rj = (36678.66/total)*100.0;
	mg = (29229.99/total)*100.0;
	es = (27165.48/total)*100.0;
	outros = (19849.53/total)*100.0;
	
	cout << "SP = " << sp << "%" << endl;
	cout << "RJ = " << rj << "%" << endl;
	cout << "MG = " << mg << "%" << endl;
	cout << "ES = " << es << "%" << endl;
	cout << "Outros = " << outros << "%" << endl;
	
	return 0;
}

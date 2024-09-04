//Bruno Amorim
/*Questão - 3) Dado um vetor que guarda o valor de faturamento diário de uma distribuidora, 
faça um programa, na linguagem que desejar, que calcule e retorne: 
• O menor valor de faturamento ocorrido em um dia do mês; 
• O maior valor de faturamento ocorrido em um dia do mês; 
• Número de dias no mês em que o valor de faturamento diário foi superior à média mensal. 
IMPORTANTE: 
a) Usar o json ou xml disponível como fonte dos dados do faturamento mensal; 
b) Podem existir dias sem faturamento, como nos finais de semana e feriados. Estes dias 
devem ser ignorados no cálculo da média;*/

#include<iostream>
using namespace std;
int main() {
	float faturamento[30], menor, maior, media; 
	int dMaiorQMedia;
	
	menor = 30000.0;
	maior = 0.0;
	media = 0.0;
	dMaiorQMedia = 0;
	
	
	faturamento[0] = 22174.1664;
	faturamento[1] = 24537.6698;
	faturamento[2] = 26139.6134;
	faturamento[3] = 0.0;
	faturamento[4] = 0.0;
	faturamento[5] = 26742.6612;
	faturamento[6] = 0.0;
	faturamento[7] = 42889.2258;
	faturamento[8] = 46251.174;
	faturamento[9] = 11191.4722;
	faturamento[10] = 0.0;
	faturamento[11] = 0.0;
	faturamento[12] = 3847.4823;
	faturamento[13] = 373.7838;
	faturamento[14] = 2659.7563;
	faturamento[15] = 48924.2448;
	faturamento[16] = 18419.2614;
	faturamento[17] = 0.0;
	faturamento[18] = 0.0;
	faturamento[19] = 35240.1826;
	faturamento[20] = 43829.1667;
	faturamento[21] = 18235.6852;
	faturamento[22] = 4355.0662;
	faturamento[23] = 13327.1025;
	faturamento[24] = 0.0;
	faturamento[25] = 0.0;
	faturamento[26] = 25681.8318;
	faturamento[27] = 1718.1221;
	faturamento[28] = 13220.495;
	faturamento[29] = 8414.61;
	
	for(int i = 0; i < 30; i++){
		cout << faturamento[i] << "\n";
		if(faturamento[i] < menor && faturamento[i] != 0.0){
			menor = faturamento[i];
		}
		if(faturamento[i] > maior){
			maior = faturamento[i];
		}
		if(faturamento[i] != 0.0){
			media = media + faturamento[i];
		}
	}
	media = media/21.0;
	for(int i = 0; i < 30; i++){
		if(faturamento[i] != 0.0 && faturamento[i] > media){
			dMaiorQMedia++;
		}
	}
	
	cout << "O menor valor de faturamento: " << menor << endl;
	cout << "O maior valor de faturamento: " << maior << endl;
	cout << "Media mensal: " << media << endl;
	cout << "Numero de dias em que o faturamento foi superior a media mensal: " << dMaiorQMedia << endl;
	
	return 0;
	 
	
	
	
	
	
	
}

//Bruno Amorim
/*Quest�o - 2) Dado a sequ�ncia de Fibonacci, onde se inicia por 0 e 1 e o 
pr�ximo valor sempre ser� a soma dos 2 valores anteriores 
(exemplo: 0, 1, 1, 2, 3, 5, 8, 13, 21, 34...), escreva um programa na linguagem 
que desejar onde, informado um n�mero, ele calcule a sequ�ncia de Fibonacci e retorne 
uma mensagem avisando se o n�mero informado pertence ou n�o a sequ�ncia.*/

#include <iostream>
#include <cmath>
using namespace std;

bool raizPerfeita(int n) {
    int v = sqrt(n);
    return (v * v == n);
}

int main() {
    int numero;
    
    cout << "Digite um numero para verificar se pertence a sequencia de Fibonacci: ";
    cin >> numero;
    
    int x = 5 * numero * numero + 4;
    int y = 5 * numero * numero - 4;
    
    if (raizPerfeita(x) || raizPerfeita(y)) {
        cout << numero << ": pertence a sequencia de Fibonacci" << endl;
    } else {
        cout << numero << ": nao pertence a sequencia de Fibonacci" << endl;
    }
    
    return 0;
}


#include <stdio.h>

// Escreva um programa em c para verificar se um determinado número é um número perfeito ou não. Exemplo:
//Digite o número: 56
//Saída esperada:
//Os divisores positivo: 1 2 4 7 8 14 28
//A soma dos divisores é: 64
//Portanto, o número não é perfeito.

int main(){
    int x, soma=0;
    scanf("%d", &x);
    for (int i=1; i<x; i++)
    {
        if (x % i ==0)
            soma = soma + i;
        }
    if (soma==x)
        printf("Numero perfeito\n");
    else
    {
        printf("Numero não perfeito\n");
    }
    return 0;
}
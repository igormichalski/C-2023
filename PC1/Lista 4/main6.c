#include <stdio.h>

//Faça um programa que leia dois números e multiplique o primeiro pelo segundo. Utilize apenas operações de soma e subtração.

int main(){
    int x, y, soma=0;
    scanf("%d %d", &x, &y);
    for (int i=0; i<x; i++)
    {
        soma = soma + y;
    }
    printf("%d\n", soma);
    return 0;
}
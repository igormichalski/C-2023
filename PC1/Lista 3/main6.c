#include <stdio.h>

//Faça um programa que leia um número inteiro e verifique se esse número é par
//ou ímpar.

int main (){
    int x;
    scanf("%d", &x);
    if (x%2==0)
        printf("O numero é par\n");
    else
        printf("O numero é impar\n");
    return 0;
}
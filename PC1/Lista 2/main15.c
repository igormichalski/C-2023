#include <stdio.h>

//  Faça um programa que leia um valor em reais e a cotação do dólar. Em seguida, imprima o valor correspondente em dólares.

int main (){
    float x, cotacao;
    scanf("%f%f", &x, &cotacao);
    x = x*cotacao;
    printf("%.2f\n", x);
    return 0;
}
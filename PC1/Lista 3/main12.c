#include <stdio.h>

//Faça um programa que leia a altura e o peso de uma pessoa. De acordo com a
//tabela a seguir, verifique e mostre qual a classificação dessa pessoa.

int main (){
    float altura, peso;
    scanf("%f%f", &altura, &peso);
    if (altura<1.20)
    {
        if (peso<60)
            printf("A");
        if (peso>=60 && peso <=90)
            printf("D");
        if (peso>90)
            printf("G");
    }
    if (altura>=1.20 && altura<=1.70)
    {
        if (peso<60)
            printf("B");
        if (peso>=60 && peso <=90)
            printf("E");
        if (peso>90)
            printf("H");
    }
    if (altura>1.70)
    {
        if (peso<60)
            printf("C");
        if (peso>=60 && peso <=90)
            printf("F");
        if (peso>90)
            printf("I");
    }
    return 0;
}
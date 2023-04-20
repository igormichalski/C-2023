#include <stdio.h>
#include <math.h>

//Faça um programa que leia um número e, caso ele seja positivo, calcule e
//mostre:
//• O número digitado ao quadrado.
//• A raiz quadrada do número digitado.

int main (){
    float x;
    scanf("%f", &x);
    if (x>=0)
    {
        printf("%.2f\n",x*x);
        x = pow(x,0.5);
        printf("%.2f\n", x);
    }
    return 0;
}
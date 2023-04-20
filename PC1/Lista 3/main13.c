#include <stdio.h>

//Faça um programa que leia três números inteiros positivos e efetue o cálculo de
//uma das seguintes médias de acordo com um valor numérico digitado pelo
//usuário e mostrado na tabela a seguir:

int main (){
    int x, y, z;
    float aux;
    scanf("%f %d %d %d", &aux, &x, &y, &z);
    if (x>=0) {
        if (aux == 1) {
        aux = x*y*z;
            printf("%f", aux);
        }
        if (aux == 2) {
        aux = (x+2.0 * y+3.0 * z)/6;
            printf("%f", aux);
        }
        if (aux == 3) {
            aux = ((1.0/x)+(1.0/y)+(1.0/z))/1;
            printf("%f", aux);
        }
        if (aux == 4) {
            aux = (x+y+z)/3;
            printf("%f", aux);
        }
    }
    return 0;
}
#include <stdio.h>

//Ler um numero e imprimir: maior que 20, igual a 20 ou menor que 20.

int main (){
    int x;
    scanf("%d", &x);
    if (x==20)
        printf("igual a 20");
    else if (x>20)
        printf("maior que 20");
    else
        printf("menor que 20");
    return 0;
}
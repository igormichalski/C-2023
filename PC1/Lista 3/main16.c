#include <stdio.h>

//Faça um programa para verificar se determinado número inteiro lido é divisível
//por 3 ou 5, mas não simultaneamente pelos dois.

int main (){
    int x;
    scanf("%d", &x);
    if (x%3==0 && x%5!=0)
        printf("é devisivel por 3");
    if (x%5==0 && x%3!=0)
        printf("é devisivel por 5");
    if (x%5==0 && x%3==0)
        
    return 0;
}
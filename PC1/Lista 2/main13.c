#include <stdio.h>

// Faça um programa que calcule o ano de nascimento de uma pessoa a partir de sua idade e do ano atual.

int main (){
    int idade, ano_atual, nasc;
    scanf("%d%d", &idade, &ano_atual);
    nasc = ano_atual - idade;
    printf("%d", nasc);
    return 0;
}
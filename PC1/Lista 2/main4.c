#include <stdio.h>

//Faça um programa que solicite o preço de uma mercadoria e o percentual de desconto. Exiba o valor do desconto e o preço a pagar.

int main() {
    float valor_mercadoria, percentual, desconto;
    scanf("%f", &valor_mercadoria);
    scanf("%f", &percentual);
    desconto = valor_mercadoria * (percentual/100);
    valor_mercadoria = valor_mercadoria - desconto;
    printf("%.2f\n", desconto);
    printf("%.2f\n", valor_mercadoria);
    return 0;
}

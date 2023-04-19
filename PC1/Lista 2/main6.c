#include <stdio.h>

//Faça um programa que pergunte a quantidade de km percorridos por um carro alugado pelo usuário, assim como a quantidade de dias
// pelos quais o carro foi alugado. Calcule o preço a pagar, sabendo que o carro custa R$ 60,00 por dia e R$ 0,15 por km rodado

int main() {
    int km_percorridos, dias;
    float pagar;
    scanf("%d", &km_percorridos);
    scanf("%d", &dias);
    pagar = (dias*60) + (km_percorridos * 0.15);
    printf("%.2f\n", pagar);
    return 0;
}

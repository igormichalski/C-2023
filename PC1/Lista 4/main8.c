#include <stdio.h>

    //Faça um programa que pergunte o depósito inicial e a taxa de juros de uma poupança. Exiba os valores
    // mês a mês para os 24 primeiros meses. Escreva o ganho com juros no período. Fórmula: M = C * (1+i)^t.

int main() {
    float deposito, juros, total;
    scanf("%f %f", &deposito, &juros);
    total = deposito;
    printf("MES [1]\n");
    printf("%.2f\n", total);
    for (int i=2; i<=24; i++)
    {
        total = total + (total * (juros/100));
        printf("MES [%d]\n", i);
        printf("%.2f\n", total);
    }
    printf("Valor total de ganho com juros: %.2f\n", total-deposito);
    return 0;
}

#include <stdio.h>

//Escreva um programa para converter um dado inteiro (em dias)
// em anos, meses e dias, supondo que todos os meses tenham 30 dias e todos os anos tenham 365 dias.
int main() {
    int dias_total, anos, messes;
    scanf("%d", &dias_total);
    anos = dias_total/365;
    dias_total = dias_total - (anos*365);
    messes = dias_total/30;
    dias_total = dias_total - (messes*30);
    printf("%d\n%d\n%d\n", anos, messes, dias_total);
    return 0;
}

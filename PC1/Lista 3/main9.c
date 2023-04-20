#include <stdio.h>
#include <string.h>

//Faça um programa que receba a altura e o sexo de uma pessoa e calcule e mostre
//seu peso ideal, utilizando as seguintes fórmulas (em que “h” corresponde à
//altura):
//• Homens: (72,7 * h) – 58
//• Mulheres: (62,1 * h) – 44,7

int main (){
    char sexo[8];
    float altura;
    scanf("%f", &altura);
    __fpurge();
    scanf("%s", &sexo);
    if (strcmp(sexo, "Homem")==0)
        printf("%f", (72.7 * altura) - 58);
    else if (strcmp(sexo, "Mulher")==0)
        printf("%f", (62.1 * altura) - 44.7);
    else
        printf("Valor Invalido. Informe Homem ou Mulher\n");
    return 0;
}

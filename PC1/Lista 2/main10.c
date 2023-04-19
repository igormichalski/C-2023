#include <stdio.h>
#include <math.h>

//Escreva um programa em que dados 'x' segundos, sejam fornecidas as quantidades de horas, minutos e segundos.

int main (){
    int x, horas, min;
    scanf("%d", &x);
    horas = x/3600;
    min = (x-(horas*3600)) / 60;
    x = x-((horas*3600)+(min*60))  ;
    printf("%dh %dmin %dsegundos",horas, min, x);

    return 0;
}
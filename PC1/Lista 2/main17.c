#include <stdio.h>

// A importância de R$780.000,00 será dividida entre três ganhadores de um concurso, sendo que:
//i. O primeiro ganhador receberá 48% do total.
//ii. O segundo receberá 35% do total.
//iii. O terceiro receberá o restante.
//Calcule e imprima a quantia recebida por cada um dos ganhadores.

int main (){
    float x=780000;
    float g1, g2, g3;
    g1 = x*0.48;
    g2 = x*0.35;
    g3 = x*0.17;
    printf("%.2f\n %.2f\n %.2f\n", g1, g2, g3);
    return 0;
}
#include <stdio.h>

//Faça um programa que calcule o tempo de viagem de um carro.
//Pergunte a distância a percorrer e a velocidade média esperada durante a viagem. Usar km e horas.

int main() {
    int distancia, velocidade_media, tempo;
    scanf("%d", &distancia);
    scanf("%d", &velocidade_media);
    tempo = distancia/velocidade_media;
    printf("%d horas\n", tempo);
    return 0;
}

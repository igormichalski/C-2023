#include <stdio.h>

// Escreva um programa que imprima o perímetro a área de um retângulo após receber sua altura e largura como entrada.

int main() {
    int altura, largura, perimetro, area;
    scanf("%d %d", &largura, &altura);
    area= altura*largura;
    perimetro = (altura*2)+(largura*2);
    printf("%d\n", area);
    printf("%d\n", perimetro);
    return 0;
}

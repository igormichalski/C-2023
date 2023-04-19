#include <stdio.h>

// Leia uma velocidade em km/h (quilômetros por hora) e apresente convertida em m/s (metros por segundo).
// A fórmula de conversão é M = K/3.6, sendo K a velocidade em km/h e M em m/s.

int main (){
    float km, ms;
    scanf("%f", &km);
    ms = km/3.6;
    printf("%.2f\n", ms);
    return 0;
}
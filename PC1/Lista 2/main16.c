#include <stdio.h>

// Leia um ângulo em graus e apresente-o convertido em radianos.
//A fórmula de conversão é R = G * π /180, sendo G o ângulo em graus e R em radianos e π = 3.141592.

int main (){
    float graus, radianos;
    scanf("%f", &graus);
    radianos = graus * 3.141592/180;
    printf("%f\n", radianos);
    return 0;
}
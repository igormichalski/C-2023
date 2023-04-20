#include <stdio.h>
#include <math.h>

//Crie um programa que retorne o tipo de triângulo, dados os comprimentos dos
//lados. Retorne os seguintes valores se eles corresponderem aos critérios.
//
//• Sem lados iguais: "scaleno"
//• Dois lados iguais: "isósceles"
//• Todos os lados iguais: "equilátero"
//• "não é um triângulo", caso as condições abaixo não forem satisfeitas:
//✓ | b - c | <a<b+c
//✓ | a - c | <b<a+c
//✓ | a - b | < c < a + b
//Dica: verifique antes se os lados formam um triângulo.
//Dica2: para calcular o módulo use a função abs(), da biblioteca math.h.
//Exemplo: abs(-15+8) = 7.

int main() {
    float a, b, c;
    scanf("%f %f %f", &a, &b, &c);

    if (fabs(b - c) >= a || a >= b + c || fabs(a - c) >= b || b >= a + c || fabs(a - b) >= c || c >= a + b) {
        printf("Nao e um triangulo.\n");
        return 0;
    }

    if (a == b && b == c) {
        printf("Equilatero.\n");
    } else if (a == b || b == c || c == a) {
        printf("Isosceles.\n");
    } else {
        printf("Escaleno.\n");
    }

    return 0;
}

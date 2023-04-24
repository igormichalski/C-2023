#include <stdio.h>

//Crie um programa que some o número total de dígitos entre dois números, inclusive. Por exemplo, entre os números 19 e 22 temos:

int main() {
    int x, y, soma = 0, numero;
    scanf("%d %d", &x, &y);
    for (int i = x; i <= y; i++) {
        numero = i;
        while (numero > 0) {
            soma += numero % 10;
            numero /= 10;
        }
    }
    printf("Resultado: %d", soma);
    return 0;
}

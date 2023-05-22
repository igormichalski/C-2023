#include <stdio.h>

//18.  Faça um programa que encontre o menor número divisível por todos os inteiros entre 1 e 10.

int main() {
    int contador, valor=0;

    do {
        contador=0;
        valor++;
        for (int i = 1; i <= 10; i++) {
            if (valor % i == 0)
                contador++;
        }

    }while (contador!=10);

    printf("Valor: %d", valor);
    return 0;
}
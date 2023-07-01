#include <stdio.h>
#include <stdbool.h>

// Escreva um programa em C para encontrar os dois elementos repetidos em um determinado array.

int main() {
    bool imprimir = false;
    int vetor[7], aux[7];
    for(int i=0; i<7; i++){
        printf("Vetor[%d]: \n", i);
        scanf("%d", &vetor[i]);
    }

    for(int i=0; i<7; i++){
        for(int j=i+1; j<7; j++){
            if(vetor[i] == vetor[j]) {
                imprimir = false;
                for (int k = 0; k < 7; k++) {
                    if (vetor[i] == aux[k]) {
                        imprimir = true;
                        break;
                    }
                }

                if (!imprimir) {
                    printf("Igual: %d\n", vetor[i]);
                    aux[i] = vetor[i];
                    break;
                }
            }
        }
    }

    return 0;
}

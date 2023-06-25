#include <stdio.h>
#include <stdbool.h>

// Faça um programa que leia um vetor de 10 posições. Verifique se existem valores iguais e os escreva na tela.

int main() {
    bool imprimir = true;
    int vetor[10], aux[10];
    for(int i=0; i<10; i++){
        printf("Vetor[%d]: \n", i);
        scanf("%d", &vetor[i]);
    }

    for(int i=0; i<10; i++){
        imprimir = true;
        for(int j=0; j<10; j++){
            if(i!=j){
                if(vetor[i]==vetor[j]) {
                    for (int k = 0; k < 10; k++) {
                         if (vetor[i] == aux[k]) {
                             imprimir = false;
                         }
                        }

                    if (imprimir) {
                        printf("Igual: %d\n", vetor[i]);
                        aux[i] = vetor[i];
                    }
                }
            }
        }
    }


    return 0;
}

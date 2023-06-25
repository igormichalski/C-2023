#include <stdio.h>

int main() {
    int tamanho;

    printf("Qual o tamanho do vetor?\n");
    scanf("%d", &tamanho);

    int vetor[tamanho];
    for(int i=0; i<tamanho; i++) {
        printf("Vetor[%d]: ", i);
        scanf("%d", &vetor[i]);
    }

    for(int i=0; i<tamanho; i++) {
        if(vetor[i]<0)
            vetor[i]=0;
    }

    for(int i=0; i<tamanho; i++) {
        printf("Vetor[%d]: %d\n", i, vetor[i]);
    }

    return 0;
}

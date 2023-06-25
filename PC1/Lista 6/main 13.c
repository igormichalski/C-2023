#include <stdio.h>
#include <stdbool.h>

//. Escreva um programa em C para verificar se um elemento está contido em um vetor.

int validar(int x, int vetor[]){
    for(int i=0; i<10; i++) {
        if(vetor[i]==x)
            return true;
    }
    return false;
}

int main() {
    int vetor[10], x;
    for(int i=0; i<10; i++) {
        printf("Vetor[%d]: ", i);
        scanf("%d", &vetor[i]);
    }

        printf("Informe um valor: \n");
        scanf("%d", &x);
        if(validar(x, vetor))
            printf("esta contido!\n");

    return 0;
}

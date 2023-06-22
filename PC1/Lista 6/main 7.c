#include <stdio.h>

int main() {
    int A[10], cont=0, soma=0;
    printf("Informe os valores do vetor:\n");
    for(int i=0; i<10; i++){
        scanf("%d", &A[i]);
        if (A[i] < 0)
            cont++;
        else
            soma += A[i];
    }
    printf("Quantidade de negativos: %d\n", cont);
    printf("Soma dos positivos: %d\n", soma);
    return 0;
}


#include <stdio.h>

int main() {
    int A[10], cont=0;
    printf("Informe os valores do vetor:\n");
    for(int i=0; i<10; i++){
        scanf("%d", &A[i]);
        if (A[i] % 2 == 0)
            cont++;
    }
    printf("Quantidade de pares: %d", cont);
    return 0;
}


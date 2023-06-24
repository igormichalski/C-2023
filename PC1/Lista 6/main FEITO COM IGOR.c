#include <stdio.h>

// 1 0 1 0 0 1 0 1 1

int main() {
    int contador=0, vetor[9] = {1,0,1,0,0,1,0,1,1};

    printf("Atual:\n");
    for(int i=0; i<9; i++)
        printf("%d ", vetor[i]);

    for(int i=0; i<9; i++){
       if(vetor[i]==0)
           contador++;
    }

    for(int i=0; i<contador; i++)
        vetor[i]=0;

    for(int i=contador; i<9; i++)
        vetor[i]=1;

    printf("\nAgora:\n");
    for(int i=0; i<9; i++)
        printf("%d ", vetor[i]);


    return 0;
}

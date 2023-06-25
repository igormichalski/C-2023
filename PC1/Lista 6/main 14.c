#include <stdio.h>

int main() {
    int tamanho, menor1, menor2;

    printf("Qual o tamanho do vetor?\n");
    scanf("%d", &tamanho);

    int vetor[tamanho];
    for(int i=0; i<tamanho; i++) {
        printf("Vetor[%d]: ", i);
        scanf("%d", &vetor[i]);
    }

    for(int i=0; i<tamanho; i++) {
        if(menor1>vetor[i])
            menor1=vetor[i];
    }

    for(int i=0; i<tamanho; i++) {
        if(menor2>vetor[i] && menor1<vetor[i])
            menor2=vetor[i];
    }

    printf("Soma : %d\n", menor1+menor2);


    return 0;
}

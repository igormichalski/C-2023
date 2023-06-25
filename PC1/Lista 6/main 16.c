#include <stdio.h>

int main() {
    int soma=0, vetor[5]= {1,-2,3,-6,4};
    for(int i=0;i<5;i++)
    {
        if (vetor[i]<0)
            soma -= vetor[i];
        else
            soma += vetor[i];
    }
    printf("Soma: %d", soma);
    return 0;
}

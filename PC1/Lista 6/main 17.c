#include <stdio.h>

int main() {
    int vetor1[5]= {1,-2,3,-6,4}, vetor2[5];

    for(int i=0;i<5;i++)
    {
      vetor2[i]=vetor1[i];
    }

    printf("Vetor 2: ");
    for(int i=0;i<5;i++)
    {
        printf("%d ", vetor2[i]);
    }
    return 0;
}

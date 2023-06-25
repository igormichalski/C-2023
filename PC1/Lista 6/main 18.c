#include <stdio.h>

int main() {
    int j=0, negativos=0, vetor1[5]= {1,-2,3,-6,-2}, vetor2[5];

    for(int i=0;i<5;i++)
    {
        if(vetor1[i]<0) {
            negativos++;
            vetor2[j] = vetor1[i];
            j++;
        }
    }

    printf("Vetor 2: ");
    for(int i=0;i<negativos;i++)
    {
        printf("%d ", vetor2[i]);
    }
    return 0;
}

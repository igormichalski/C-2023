#include <stdio.h>


int main() {
    int n;
    printf("Infome o tamanho do vetor: \n");
    scanf("%d", &n);

    int a[n], b[n];

    printf("Infome os valores do vetor: \n");
    for(int i=0; i<n; i++)
        scanf("%d", &a[i]);

    for(int i=0; i<n; i++)
    {
        b[i]=0;
        for (int j = 0; j<=i; ++j) {
            b[i]+=a[j];
        }
    }
    for(int i=0; i<n; i++)
        printf("%d ", b[i]);
    return 0;
}
#include <stdio.h>

int main() {
    int n;
    printf("Informe o tamanho do vetor: \n");
    scanf("%d", &n);

    int a[n], soma=0;
    for(int i=0; i<4;i++){
        printf("A[%d]: \n", i);
        scanf("%d", &a[i]);
    }
    soma = a[0]+a[n-1];
    printf("Soma: %d\n", soma);
    return 0;
}
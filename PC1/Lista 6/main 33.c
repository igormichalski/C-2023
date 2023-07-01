#include <stdio.h>

int main() {
    int n;
    printf("Informe o tamanho do vetor: ");
    scanf("%d", &n);

    int a[n];
    int b[n];

    printf("Informe os elementos do vetor:\n");
    for (int i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }

    b[0] = a[1] * 1;
    b[n - 1] = a[n - 2] * 1;

    for (int i = 1; i<n -1; i++) {
        b[i] = a[i-1] * a[i+1];
    }


    printf("O novo array e:\n");
    for (int i = 0; i < n; i++) {
        printf("%d ", b[i]);
    }

    return 0;
}

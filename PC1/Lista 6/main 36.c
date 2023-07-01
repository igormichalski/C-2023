#include <stdio.h>

int duplicados(int a[], int n) {
    int count = 0;

    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            if (a[i] == a[j]) {
                count++;
                break;
            }
        }
    }

    return count;
}

int main() {
    int n;
    printf("Informe o tamanho do vetor\n");
    scanf("%d", &n);

    int a[n];

    printf("Informe os valores do vetor\n");
    for (int i=0; i<n; i++){
        scanf("%d", &a[i]);
    }

    printf("A quantidade de elementos duplicados no array e: %d\n", duplicados(a, n));

    return 0;
}

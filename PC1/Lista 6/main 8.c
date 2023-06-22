#include <stdio.h>

int main() {
    int A[10], B[10], C[10];
    for (int i=0; i<10; i++){
        printf("A[%d]\n", i);
        scanf("%d",&A[i]);
        printf("B[%d]\n", i);
        scanf("%d",&B[i]);
        C[i] = A[i] - B[i];
        printf("Valor de C[%d]: %d\n", i, C[i]);
    }
    return 0;
}


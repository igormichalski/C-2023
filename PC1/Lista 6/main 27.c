#include <stdio.h>

int main() {
    int a[10], b[10],maior=0;
    for(int i=0; i<10;i++) {
        printf("A[%d]: \n", i);
        scanf("%d", &a[i]);
        if (a[i] > 100) {
            b[maior] = a[i];
            maior++;
        }
    }
    for(int i=0; i<maior;i++) {
        printf("A[%d] = %d \n", i, b[i]);
    }

    return 0;
}
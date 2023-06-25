#include <stdio.h>

int main() {
    int a[4], b[4], c[4];
    for(int i=0; i<4;i++){
        printf("A[%d]: \n", i);
        scanf("%d", &a[i]);
    }
    for(int i=0; i<4;i++){
        printf("B[%d]: \n", i);
        scanf("%d", &b[i]);
    }
    for(int i=0; i<4;i++){
        c[i]= a[i]+b[i];
        printf("C[%d] = %d\n", i, c[i]);
    }
    return 0;
}
#include <stdio.h>

int main() {
    int A[6], B[6];
    for (int i=0; i<6; i++){
        printf("A[%d]: \n", i);
        scanf("%d", &A[i]);
        B[i]= A[i]*A[i];
        printf("B[%d]: %d\n", i, B[i]);
    }
    return 0;
}


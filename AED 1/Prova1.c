#include <stdio.h>


int main() {
    int i;
    float A, B, C, aux;

    scanf("%d%f%f%f", &i, &A, &B, &C);

    if (i==1){
        if (B < A && B < C) {
            aux = A;
            A = B;
            B = aux;
        }
        if (C < A && C < B) {
            aux = A;
            A = C;
            C = aux;
        }
        if(C < B){
            aux = B;
            B = C;
            C = aux;
        }
        printf("%f %f %f", A, B, C);
    }
    if(i==2) {
        if (B > A && B > C) {
            aux = A;
            A = B;
            B = aux;
        }
        if (C > A && C > B) {
            aux = A;
            A = C;
            C = aux;
        }
        if(C>B){
            aux = B;
            B = C;
            C = aux;
        }
        printf("%f %f %f", A, B, C);
    }
    if(i==3){
        if(A>B && A>C)
            printf("%f %f %f", B, A, C);

        if(B>A && B>C)
            printf("%f %f %f", A, B, C);

        if(C>A && C>B)
            printf("%f %f %f", A, C, B);
    }
    return 0;
}

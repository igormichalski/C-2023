#include <stdio.h>

int main() {
    int A[8], x, y;
    for(int i=0; i<8; i++){
        printf("\nA[%d]: ", i);
        scanf("%d", &A[i]);
    }
    printf("\nInforme x e y: ");
    scanf("%d %d", &x, &y);
    if (x>=0 && x<=7 && y>=0 && y<=7)
        printf("Soma: %d", A[x]+A[y]);
    else
        printf("Valor invalido");
    return 0;
}


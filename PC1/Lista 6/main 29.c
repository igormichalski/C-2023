#include <stdio.h>
//6 8 4 -5 7 9

int main() {
    int a[6], soma;
    scanf("%d", &soma);
    for (int i = 0; i < 6; i++) {
        printf("A[%d]: ", i);
        scanf("%d", &a[i]);
    }
    for (int i = 0; i < 6; i++){
        for (int j = 0; j < 6; j++){
            if(i!=j) {
                if (a[i] + a[j] == soma) {
                    printf("Posicao %d e %d", i, j);
                    return 0;
                }
            }
        }
    }

    return 0;
}

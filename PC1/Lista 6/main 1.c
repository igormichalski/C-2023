#include <stdio.h>

int main(){
    int x[6];
    printf("Informe 6 numeros: ");
    for (int i=0; i<6; i++)
        scanf("%d", &x[i]);
    for (int i=0; i<6; i++)
        printf("%d\n", x[i]);
    return 0;
}


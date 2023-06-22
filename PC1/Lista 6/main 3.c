#include <stdio.h>

int main(){
    int x[5];
    float media;
    printf("Informe 5 numeros: ");
    for (int i=0; i<5; i++)
        scanf("%d", &x[i]);

    printf("Numeros lidos:\n");
    for (int i=0; i<5; i++)
        printf("%d\n", x[i]);

    for (int i=0; i<5; i++)
        media += x[i+1];

    media /= 5;
    printf("Media: %f\n", media);
    return 0;
}


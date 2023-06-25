#include <stdio.h>


int main() {
    int notas[4];
    printf("Informe as notas: \n");
    for(int i=0;i<4;i++)
        scanf("%d", &notas[i]);
    printf("Media: %d", (notas[0]+notas[1]+notas[2]+notas[3])/4);
    return 0;
}
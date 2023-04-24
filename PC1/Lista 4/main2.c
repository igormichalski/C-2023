#include <stdio.h>


int main(){
    int soma, quadrado, n;
    scanf("%d", &n);
    for (int i=0; i<=n; i++)
    {
        soma = soma + i;
        quadrado = i*i;
        printf("QUADRADO DE [%d]: %d\n", i, quadrado);
    }
    printf("SOMA: %d\n", soma);

    return 0;
}
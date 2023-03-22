#include <stdio.h>
#include <stdlib.h>

int main()
{
    int tamanho, contador = 1, contador_2 = 1;
    printf("Informe o tamanho da base do triangulo: \n");
    scanf("%d", &tamanho);

    //TRIANGULO
    printf("\n");
    for (int j = 0; j < tamanho - 1; j++)
    {
        printf(" ");
    }
    printf("*\n");
    for(int i= 0; i < tamanho - 2; i++)
    {

    for (int j = 0; j < tamanho - contador - 1; j++)
    {
        printf(" ");
    }

    printf("*");

    for (int j = 0; j <contador_2; j++)
    {
        printf(" ");
    }
    printf("*\n");
    contador++;
    contador_2 = contador_2 + 2;
    }
    for (int j = 0; j < tamanho; j++)
    {
       printf("* ");
    }
     return 0;
}

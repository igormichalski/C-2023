#include <stdio.h>
#include <stdlib.h>

int main()
{
    int tamanho, contador = 1;
    printf("Informe o tamanho da base do Quadrado: \n");
    scanf("%d", &tamanho);
  
        printf("\n\n");
        for(int j = 0; j <tamanho; j++)
        {
            if (contador == 1 || contador == tamanho)
            {
            if(contador == tamanho)
            {
            printf("\n");
            }
                for (int k = 0; k < tamanho; k++)
                {
                    printf("* "); 
                }
                contador ++;
            }
            else
            {
                printf("\n* ");
                for (int t = 2; t < tamanho; t++)
                {
                    printf("  ");
                }
                printf("* ");
                contador ++;
            }
        }
    return 0;
}

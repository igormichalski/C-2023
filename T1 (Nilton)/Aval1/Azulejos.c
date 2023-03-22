#include <stdio.h>
#include <stdlib.h>
//Azulejos

int main()
{
    int n, a, b, t, i;
    printf("Aval 1 (Azulejos)\n");
    do
    {
        t = 0;
        printf("\nQuantos azulejos voce comprou: ");
        scanf("%d", &n);
        printf("\nInforme o valor de A: ");
        scanf("%d", &a);
        printf("\nInforme o valor de B: ");
        scanf("%d", &b);
        if ((n>=3) && (n<=10000) && (a<=n) && (b<=n)  && (a>=2) && (b>=2))
        {
            for (i=1; i<=n; i++)
            {

                if ((i%a==0) || (i%b==0))
                {
                    t += 1;
                }

            }
            printf("%d", t);
        }
        else
        {
            printf("informe um valor valido\n");
        }

    }
    while (n!=0 || a!=0 || b!=0);
    return 0;
}


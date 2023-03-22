#include <stdio.h>
#include <stdlib.h>
//Elevador Espacial
//lembrete mental: verificar primeiro 13 e dps 4, pois 13 pode virar 14

int main()
{
    int n, i, a, p1, p2, p3, p4, p5, p6, p7;
    a = 0;
    i = 0;
    printf("AVALIACAO 1 (ELEVADOR ESPACIAL)\n");
    printf("\nInforme um numero: ");
    scanf("%d", &n);
    if (n>=1 && n<=1000000)
    {
        while (i<n)
        {
            a = a + 1;
            i = i + 1;
            p7 = (a%10);
            p6 = (a/10)%10;
            p5 = (a/100)%10;
            p4 = (a/1000)%10;
            p3 = (a/10000)%10;
            p2 = (a/100000)%10;
            p1 = (a/1000000)%10;
            if((p1==1) && (p2==3))
            {
                a = a + 100000;
            }
            if((p2==1) && (p3==3))
            {
                a = a + 10000;
            }
            if((p3==1) && (p4==3))
            {
                a = a + 1000;
            }
            if(( p4==1)&&(p5==3))
            {
                a = a + 100;
            }
            if((p5==1)&&(p6==3))
            {
                a = a + 10;
            }
            if((p6==1)&&(p7==3))
            {
                a = a + 1;
            }
            p7 = (a%10);
            p6 = (a/10)%10;
            p5 = (a/100)%10;
            p4 = (a/1000)%10;
            p3 = (a/10000)%10;
            p2 = (a/100000)%10;
            p1 = (a/1000000)%10;
            if(p7==4)
            {
                a = a + 1;
            }

            if(p6==4)
            {
                a = a + 10;
            }

            if(p5==4)
            {
                a = a + 100;
            }

            if(p4==4)
            {
                a = a + 1000;
            }

            if(p3==4)
            {
                a = a + 10000;
            }
            if(p2==4)
            {
                a = a + 100000;

            }
            if(p1==4)
            {
                a = a + 1000000;
            }

        }
        printf("\nO numero desse andar deve ser: %d\n",a);
    }
    else
    {
        printf("\nInforme um numero valido");
    }
    return 0;
}

#include <stdio.h>
#include <string.h>
//Folha de Pagamentos

int main()
{
    int n, m, i, c, salario;
    printf("\nInforme a quantidade de funcionarios: ");
    scanf("%d", &n);
    if (n>0 && n<=10000)
    {
        for (i=1; i<=n; i++)
        {
            printf("\nInforme a matricula do funcionario: ");
            scanf("%d", &m);
            if (m>0 && m<=30000)
            {
                for (c=1; c<=m; c++)
                {
                    if (m % c == 0)
                    {
                        salario += c;
                    }

                }
                printf("\nO salario desse funcionario e de: %d", salario);
                salario = 0;
            }
            else
            {
                return  printf("\nInforme um valor de matricula valido");
            }
        }
    }
    else
    {
        printf("Informe uma quantidade de funcionarios valido\n");
    }
    return 0;
}

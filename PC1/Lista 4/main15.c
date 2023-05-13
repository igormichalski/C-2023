#include <stdio.h>

//Ex 15

int main() {
    int n;
    scanf("%d", &n);

    for(int i = 1; i<=n; i++){

        //Escreve os espaços
        for (int j=1; j<=n-i; j++) {
            printf(" ");
        }

        //Escreve os primeiros numeros
        for(int j=1; j<=i; j++)
        {
            printf("%d", j);
        }

        //Escreve os prox numeros
        for(int j=i-1; j>=1; j--)
        {
            printf("%d", j);
        }

        printf("\n");
    }
    return 0;
}

#include <stdio.h>

//Ex 16

int main() {
    int n, contador = 1;
    scanf("%d", &n);

    for(int i = 1; i<=n; i++){

        //Escreve os espaços
        for (int j=1; j<=n-i; j++) {
            printf(" ");
        }


        for(int j=1; j<=i; j++)
        {
            printf("%d", contador);
            contador++;
            printf(" ");
        }

    printf("\n");
    }
    return 0;
}

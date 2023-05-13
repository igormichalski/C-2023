#include <stdio.h>

//TIRAR DUVIDA COM PROFESSOR SOBRE valores qua não foram declarados

int main() {
     int x, soma = 0, base = 9;
    scanf("%d", &x);

    for(int i=1; i<=x; i++)
    {
       soma = soma + base;
       base = (base*10) + 9;
    }

    printf("%d", soma);
    return 0;
}
#include <stdio.h>

int main (){
    int x, soma=0, digito;
    scanf("%d", &x);
    while(x!=0)
    {
        digito = x % 10;
        soma += digito;
        x = x/10;
    }
    printf("%d", soma);
}

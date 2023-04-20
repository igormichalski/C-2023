#include <stdio.h>

//Ler 4 números inteiros e soma-los. Se a soma for maior que 100, mostrar o
//resultado da soma.

int main (){
    int x1, x2, x3, x4;
    scanf("%d%d%d%d", &x1, &x2, &x3, &x4);
    x1 = x1+x2+x3+x4;
    if (x1>100)
        printf("%d", x1);
    return 0;
}
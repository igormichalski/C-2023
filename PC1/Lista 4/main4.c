#include <stdio.h>


int main(){
    int resultado, n;
    scanf("%d", &n);
    for (int i=0; i<=10; i++)
    {
        resultado = n*i;
        printf("[%d] X [%d] = [%d]\n", n, i, resultado);
    }

    return 0;
}
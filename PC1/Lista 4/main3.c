#include <stdio.h>


int main(){
    int cubo, n;
    scanf("%d", &n);
    for (int i=1; i<=n; i++)
    {
        cubo = i*i*i;
        printf("O NUMERO É [%d] E O CUBO DE [%d] É: %d\n", i, i, cubo);
    }

    return 0;
}
#include <stdio.h>

//Ex 14

int main() {
    int n;
    float soma = 0;
    scanf("%d", &n);

    for (int i=1; i<=n; i++)
    soma += 1.0/i;

    printf("%f", soma);
    return 0;
}

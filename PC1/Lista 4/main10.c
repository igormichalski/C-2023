#include <stdio.h>
#include <math.h>

int main() {
    long long binario;
    int decimal=0, expoente=0, resto;

    scanf("%lld", &binario);
    while (binario != 0) {
        resto = binario % 10;
        decimal += resto * pow(2, expoente);
        expoente++;
        binario /= 10;
    }
    printf("%d\n", decimal);
    return 0;
}

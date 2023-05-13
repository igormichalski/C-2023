#include <stdio.h>

//inversor de numero (ex 17)

int main() {
    int n, contrario = 0;
    scanf("%d", &n);

    while (n != 0) {
        contrario = contrario * 10 + n % 10;
        n /= 10;
    }
    printf("%d", contrario);
    return 0;
}

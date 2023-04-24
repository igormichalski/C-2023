#include <stdio.h>
#include <stdbool.h>

int teste_primo(int numero) {
    for (int i = 2; i <= numero/2; i++) {
        if (numero % i == 0) {
            return false;                           //para não primo
        }
    }
    return true;                                    //para primo
}

int main() {
    int n, contador = 0, num = 2;
    scanf("%d", &n);
    if (n<=1)
    {
        return 0;
    }
    while (contador<n) {                          //Roda para todos os numeros
        if (teste_primo(num)) {              //Vai chamar a função que verifica se o numero é primo
            printf("%d ", num);
            contador++;
        }
        num++;
    }
    return 0;
}

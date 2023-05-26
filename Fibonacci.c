#include <stdio.h>
#include <time.h>

//Isso é um teste de tempo de processamento pois estava curioso

double fib(int n){
    if (n == 0 || n == 1)
    return n;

    return fib(n-1) + fib(n-2);
}


int main() {
    clock_t inicio = clock();

    printf("%lf\n", fib(30));
    printf("%lf\n", fib(35));
    printf("%lf\n", fib(23));

    clock_t fim = clock();
    double tempo_decorrido = (double)(fim - inicio) / CLOCKS_PER_SEC;
    printf("\nTempo decorrido: %lf segundos\n", tempo_decorrido);
    return 0;
}

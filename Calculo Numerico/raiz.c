#include <stdio.h>
#include <math.h>
//decobre a raiz de n de qualquer valor
//gcc main.c -o main -lm

int main() {
    int i=0;
    long double ans=1, x, anterior=0, expoente;
    printf("Entre com o expoente: \n");
    scanf("%Lf", &expoente);
    printf("Entre com o valor: \n");
    scanf("%Lf", &x);

    expoente--;
    while(anterior!=ans){
        printf("X[%d]: %.9Lf\n", i, ans);
        i++;
        anterior = ans;
        ans = (1.0/(expoente+1))*((expoente * ans)+(x/powl(ans,expoente)));
    }
    printf("Raiz: %.9Lf\n", ans);
    return 0;
}

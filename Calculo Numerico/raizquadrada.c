#include <stdio.h>

//64.81

int main() {
    int i=0;
    long double ans=1, x, anterior=0;
    scanf("%Lf", &x);

    while(anterior!=ans){
        printf("X[%d]: %.9Lf\n", i, ans);
        i++;
        anterior = ans;
        ans = (1.0/2.0)*(ans+(x/ans));
    }
    printf("Raiz quadrada: %.9Lf\n", ans);
    return 0;
}

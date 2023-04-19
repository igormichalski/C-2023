#include <stdio.h>
#include <math.h>

//rodar direto no terminal com -lm

int main (){
    float x;
    printf("um inteiro pra conta:");
    scanf("%f", &x);
    x = pow(x, 1.0/3.0);
    printf("%.2f\n", x);
    return 0;
}
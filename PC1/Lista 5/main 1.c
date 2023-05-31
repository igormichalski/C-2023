#include <stdio.h>

int main(){
    float valor;
    scanf("%f", &valor);
    printf("A vista: %f\n", valor-(valor*0.10));
    printf("2 vezes de: %.2f\n", valor/2);
    if (valor>100) {
        for (int i = 3; i <= 5; i++)
            printf("%d vezes de: %.2f\n", i, (valor + (valor * 0.03)) / i);
        if(valor>300){
            for (int i = 6; i <= 10; i++)
                printf("%d vezes de: %.2f\n", i, (valor + (valor * 0.08)) / i);
        }
    }
    return 0;
}

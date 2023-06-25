#include <stdio.h>


int main() {
    int V[5]= {1,2,4,7,11};
    printf("Primos dentro do vetor: ");

    for (int i=0; i<5; i++){
        int contador=1, validar=0;
        while (contador<=V[i]){
            if (V[i] % contador == 0)
                validar++;
            contador++;
        }
        if (validar==2){
            printf("%d ", V[i]);
        }
    }
    return 0;
}
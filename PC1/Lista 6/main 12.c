#include <stdio.h>
#include <stdbool.h>

int validar(int x, int vetor[]){
    for(int i=0; i<10; i++) {
        if(vetor[i]==x)
            return false;
    }
    return true;
}

int main() {
    int vetor[10], x;
    for(int i=0; i<10; i++){
        printf("Vetor[%d]: \n", i);
        scanf("%d", &x);
        if(validar(x, vetor))
            vetor[i]=x;
        else
            i--;
    }

    for(int i=0; i<10; i++){
        printf("Vetor[%d]: %d\n", i, vetor[i]);
    }

    return 0;
}

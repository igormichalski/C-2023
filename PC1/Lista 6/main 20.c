#include <stdio.h>


int main() {
        int x, V[5]= {1,2,4,7,11};
        printf("Informe o numero que deseja buscar: \n");
        scanf("%d",&x);
        for(int i=0;i<5;i++){
            if(V[i]==x)
                printf("Temos um numero desse na posicao: %d\n", i);
        }

    return 0;
}
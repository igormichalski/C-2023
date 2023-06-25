#include <stdio.h>


int main() {
        int menor, V[5]= {1,2,4,-7,11};
        menor=V[0];
        for(int i=1;i<5;i++){
            if(V[i]<menor)
                menor=V[i];
        }
    printf("Menor: %d", menor);

    return 0;
}
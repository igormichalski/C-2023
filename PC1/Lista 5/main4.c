#include <stdio.h>

int main (){
    int x, par = 0, impar = 1;
    scanf("%d", &x);
    for(int i=0; i<x; i++){
        while (par % 2 != 0) {
            par++;
        }
        printf("%d ", par);
        par++;
    }
    for(int i=0; i<x; i++){
        while (impar % 2 == 0) {
            impar++;
        }
        printf("%d ", impar);
        impar++;
    }
}

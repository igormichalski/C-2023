#include <stdio.h>

int main() {
    int a[3][3], contador=1;
    for(int i=0;i<3;i++){
        for (int j=0;j<3;++j) {
            a[i][j]=contador;
            contador++;
        }
    }
    for(int i=0;i<3;i++) {
        for (int j = 0; j < 3; ++j) {
            printf("elemento - [%d],[%d]: %d\n", i, j, a[i][j]);
        }
    }
    return 0;
}

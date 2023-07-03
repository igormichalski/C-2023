#include <stdio.h>

int main() {
    int a[3][3]={1,2,3,4,5,6,7,8,9};
    int b[3][3]={9,8,7,6,5,4,3,2,1};
    int c[3][3];

    for(int i=0;i<3;i++){
        for (int j=0;j<3;++j) {
            c[i][j]= a[i][j] - b[i][j];
        }
    }
    for(int i=0;i<3;i++) {
        for (int j = 0; j < 3; ++j) {
            printf("elemento - [%d],[%d]: %d\n", i, j, c[i][j]);
        }
    }
    return 0;
}

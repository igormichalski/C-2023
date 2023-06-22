#include <stdio.h>

int main() {
    int A[100], j=0;
    for (int i=0; i<100; i++){
        if(j % 7 == 0) {
            j++;
            i--;
        }else{
            A[i]=j;
            j++;
        }
    }
    for (int i=0; i<100; i++)
        printf("A[%d]= %d\n", i, A[i]);
    return 0;
}


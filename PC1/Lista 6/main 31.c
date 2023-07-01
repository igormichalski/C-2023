#include <stdio.h>


int main() {

    int n;
    printf("Informe o tamanho do vetor: \n");
    scanf("%d", &n);

    int  a[n];
    for(int i=0;i<n;i++)
    {
        printf("A[%d]: \n", i);
        scanf("%d", &a[i]);
    }

    for(int i=0;i<n;i++)
    {
        printf("%d ", a[i]);
    }

    for(int i=0;i<n-1;i++) {
        for (int j=0; j<n-i-1; ++j) {
            if (a[j] > a[j + 1]) { // ">" Do menor para o maior "<" do maior para o menor
                int temp = a[j];
                a[j] = a[j + 1];
                a[j + 1] = temp;
            }
        }
    }

    for(int i=0;i<n;i++)
    {
        printf("%d ", a[i]);
    }
    return 0;
}
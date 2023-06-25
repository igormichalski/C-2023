#include <stdio.h>
//2, 3, 2, 5, 6, 5, 8, 9, 1, 3

int main() {
    int a[10], frequencia[10] = {0}, aux[10] = {0};

    for (int i = 0; i < 10; i++) {
        printf("A[%d]: ", i);
        scanf("%d", &a[i]);
    }

    for (int i = 0; i < 10; i++) {
        for (int j = 0; j < 10; j++) {
            if (a[i] == a[j]) {
                frequencia[i]++;
            }
        }
    }

    for (int i = 0; i < 10; i++) {
        if (aux[i] == 0) {
            for (int j = i + 1; j < 10; j++) {
                if (a[i] == a[j]) {
                    aux[j] = 1;
                }
            }
            printf("%d tem a frequência de: %d\n", a[i], frequencia[i]);
        }
    }

    return 0;
}

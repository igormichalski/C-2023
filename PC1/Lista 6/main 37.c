#include <stdio.h>

int main() {
    int _1 = 0, _2 = 0, _0 = 0, a[12] = {0, 1, 2, 2, 1, 0, 0, 2, 0, 1, 1, 0};

    for (int i = 0; i < 12; ++i) {
        if (a[i] == 1)
            _1++;
        else if (a[i] == 2)
            _2++;
        else
            _0++;
    }

    int index = 0;

    for (int i = 0; i < _0; ++i)
        a[index++] = 0;

    for (int i = 0; i < _1; ++i)
        a[index++] = 1;

    for (int i = 0; i < _2; ++i)
        a[index++] = 2;


    for (int i = 0; i < 12; ++i)
        printf("%d ", a[i]);

    return 0;
}

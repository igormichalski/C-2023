#include <stdio.h>

int main(){
    for (int i=1000; i<=1999; i++)
    {
        if (i%11==5)
            printf("%d \n", i);
    }
    return 0;
}

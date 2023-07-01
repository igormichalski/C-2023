#include <stdio.h>


int main() {
    int maisFrequenteValor, maisFrequente=0, cont=0, a[9]= {1, 3, 3, 7, 4, 3, 2, 3, 3};
    for(int i=0;i<9;i++)
    {
        for(int j=0; j<9; j++){
            if (a[i]==a[j])
                cont++;
        }
        if (cont>maisFrequente)
        {
            maisFrequente=cont;
            maisFrequenteValor=a[i];
        }
    }
    printf("O mais frequente e: %d", maisFrequenteValor);

    return 0;
}
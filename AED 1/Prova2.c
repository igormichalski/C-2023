#include <stdio.h>


int main() {
    int num;
    float media1, media2, intervalo1 = 0, intervalo2 = 0, C1 = 0, C2 = 0;

    do{
        scanf("%d", &num);
        if (num>=0 && num<=200){
            if(num>=0 && num<=100)
            {
                intervalo1 += 1.0;
                C1 += num;
            }else{
                intervalo2 += 1.0;
                C2 += num;
            }
        }
    }while(num>=0);

    media1 = C1/intervalo1;
    media2 = C2/intervalo2;

    printf("Intervalor 1: %f", intervalo1);
    printf("Intervalor 2: %f", intervalo2);

    printf("media 1: %f \n", media1);
    printf("media 2: %f \n", media2);

    return 0;
}

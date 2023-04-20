#include <stdio.h>

//Faça um programa que leia um número entre 0 e 10, e escreva este número
//por extenso. Use o comando switch.

int main (){
    int x;
    scanf("%d", &x);
    if (x<=10 && x>=0)
    {
        switch (x) {
            case 0:
                printf("zero");
                break;
            case 1:
                printf("um");
                break;
            case 2:
                printf("dois");
                break;
            case 3:
                printf("tres");
                break;
            case 4:
                printf("quatro");
                break;
            case 5:
                printf("cinco");
                break;
            case 6:
                printf("seis");
                break;
            case 7:
                printf("sete");
                break;
            case 8:
                printf("oito");
                break;
            case 9:
                printf("nove");
                break;
            default:
                printf("dez");
                break;
        }
    }
    return 0;
}
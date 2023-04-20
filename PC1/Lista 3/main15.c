#include <stdio.h>

//Usando o comando switch, escreva um programa que leia um inteiro entre 1 e 7
//e imprima o dia da semana correspondente a esse número. Isto é, domingo, se
//1, segunda-feira, se 2, e assim por diante.

int main (){
    int x;
    scanf("%d", &x);
    if (x>0 && x<8) {
        switch (x) {
            case 1:
                printf("Domingo");
                break;
            case 2:
                printf("Segunda");
                break;
            case 3:
                printf("Terça");
                break;
            case 4:
                printf("Quarta");
                break;
            case 5:
                printf("Quinta");
                break;
            case 6:
                printf("Sexta");
                break;
            case 7:
                printf("Sabado");
                break;
        }
    }
    return 0;
}
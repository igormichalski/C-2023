#include <stdio.h>

//Faça um programa que leia dois números e mostre o maior deles. Se, por
//acaso, os dois números forem iguais, imprima a mensagem “Números iguais”.

int main (){
    int x1, x2;
    scanf("%d%d", &x1, &x2);
    if (x1==x2)
        printf("Os valores são iguais mermão!!");
    else if (x1>x2)
        printf("O numero %d é maior", x1);
    else
        printf("O numero %d é maior", x2);
    return 0;
}
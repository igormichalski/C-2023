#include <stdio.h>

//Faça um programa que leia três valores inteiros e mostre sua soma.

int main (){
    int x,y,z;
    scanf("%d%d%d", &x,&y,&z);
    x = x+y+z;
    printf("%d", x);
    return 0;
}
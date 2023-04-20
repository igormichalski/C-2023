#include <stdio.h>
#include <stdio_ext.h>
#include <string.h>

//Faça um programa que calcule o preço a pagar pelo fornecimento de energia
//elétrica. Pergunte a quantidade de kw/h consumidas e o tipo de instalação: R
//para residências, I para indústrias e C para comércios. Calcule o preço a pagar de
//acordo com a tabela a seguir:

int main (){
    float x;
    char tipo[1];
    scanf("%f", &x);
    __fpurge(stdin);
    scanf("%s", &tipo);
    if(strcmp(tipo,"R")==0){
        if(x<=500)
            x= x*0.40;
            else
            x= x*0.65;
        printf("%f", x);
    }
    if(strcmp(tipo,"C")==0) {
        if(x<=1000)
            x= x*0.50;
        else
            x= x*0.60;
        printf("%f", x);
    }
    if( strcmp(tipo,"I")==0)
    {
        if(x<=5000)
            x= x*0.55;
        else
            x= x*0.60;
        printf("%f", x);
    }
    return 0;
}
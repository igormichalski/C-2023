#include <stdio.h>

//Faça um programa que leia o salário de um trabalhador e o valor da prestação
//de um empréstimo. Se a prestação:
//• For maior que 20% do salário, imprima: “Empréstimo não concedido.”
//• Caso contrário, imprima: “Empréstimo concedido.”

int main (){
    float salario, prestacao, aux;
    scanf("%f%f", &salario, &prestacao);
    aux = salario*0.20;
    if (aux<prestacao)
        printf("Emprestimo não concedido\n");
    else
        printf("Emprestimo concedido\n");
    return 0;
}
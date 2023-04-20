#include <stdio.h>
#include <string.h>

//Uma empresa vende o mesmo produto para quatro diferentes estados. Cada
//estado possui uma taxa diferente de imposto sobre o produto. Faça um
//programa em que o usuário entre com o valor e o estado de destino do produto
//e o programa retorne o preço final do produto acrescido do imposto do estado
//em que ele será vendido. Se o estado digitado não for válido, mostrará uma
//mensagem de erro..


int main (){
    char estado[2];
    float valor;
    scanf("%f", &valor);
    __fpurge();
    scanf("%s", &estado);
    if (strcmp(estado,"MG")==0)
        printf("%.2f", valor + valor*0.07);
    else if (strcmp(estado,"SP")==0)
        printf("%.2f", valor + valor*0.12);
    else if (strcmp(estado,"RJ")==0)
        printf("%.2f", valor + valor*0.15);
    else if (strcmp(estado,"MS")==0)
        printf("%.2f", valor + valor*0.08);
    else
        printf("Erro");
    return 0;
}
#include <stdio.h>

//14. Faça um programa que informe o mês de acordo com o número digitado pelo
//usuário. Exemplo: Entrada = 4. Saída = Abril.

int main (){
    int x;
    scanf("%d", &x);
    if (x>0 && x<13) {
        switch (x) {
            case 1:
                printf("Janeiro");
                break;
            case 2:
                printf("Fevereiro");
                break;
            case 3:
                printf("Março");
                break;
            case 4:
                printf("Abril");
                break;
            case 5:
                printf("Maio");
                break;
            case 6:
                printf("Junho");
                break;
            case 7:
                printf("Julho");
                break;
            case 8:
                printf("Agosto");
                break;
            case 9:
                printf("Setembro");
                break;
            case 10:
                printf("Outubro");
                break;
            case 11:
                printf("Novembro");
                break;
            case 12:
                printf("Dezembro");
                break;
        }
    }
    return 0;
}
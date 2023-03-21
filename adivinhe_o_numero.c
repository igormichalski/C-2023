#include <stdio.h>
#include <stdlib.h>
#include <Windows.h>
#include <time.h>

int main(){
        srand(time(NULL));
        int tentativas=0, x, y= rand()%50;
        printf("Gerando um valor aleatorio entre [0] e [50]\n");
        for(int i=0; i<8;i++)
        {
            printf(".");
            Sleep(300);
        }
        system("cls");
        do{
        printf("Informe um valor: \n");
        scanf("%d", &x);
        system("cls");
        if (x<=50 && x>=0)
        {
        if(x==y){
        printf("Voce acertou \n");
        printf("Demorou %d tentativas!! \n", tentativas+1);
        }
        else{
        if(x>y)
        {
        printf("Tente um numero mais baixo \n");
        tentativas++;
        }
        if(x<y)
        {
        printf("Tente um numero mais alto \n");
        tentativas++;
        }
        }
        }
        else
        {
            printf("O numero informado não é valido!\n");
        }
           system("pause");
            system("cls");
        }while(x!=y);
        return 0;
}

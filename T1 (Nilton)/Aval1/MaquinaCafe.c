#include <stdio.h>
#include <stdlib.h>
// Máquina de Café

int main()
{
    int primeiro,segundo,terceiro,Minutos;
    primeiro=0;
    segundo=0;
    terceiro=0;
    Minutos=0;
    printf("quantas pessoas tem no primeiro andar?:\n\n");
    scanf("%d",&primeiro);
    printf("quantas pessoas tem no segundo andar?:\n\n");
    scanf("%d",&segundo)    ;
    printf("quantas pessoas tem no terceiro andar?:\n\n");
    scanf("%d",&terceiro);
    if((primeiro<0) || (primeiro>1000) || (segundo<0) || (segundo>1000) || (terceiro<0) || (terceiro>1000))
    {
        printf("numero invalido pois nao é acima de 0 ou abaixo de 1000");
    }
    else
    {
        if((primeiro==terceiro) && (segundo==0))
        {
            Minutos = (primeiro + terceiro) * 2;
            printf("Voce vai demorar: %d minutos\n",Minutos);
            printf("Maquina vai estar no primeiro,segundo ou terceiro andar");
        }
        else if((primeiro>segundo) && (primeiro>terceiro))
        {
            Minutos = ((segundo * 2) + (terceiro * 4));
            printf("Voce vai demorar: %d minutos\n",Minutos);
            printf("Maquina vai estar no primeiro ou segundo andar");
        }
        else if((segundo>primeiro) && (segundo>terceiro))
        {
            Minutos = ((primeiro * 2) + (terceiro * 2));
            printf("Voce vai demorar: %d minutos\n",Minutos);
            printf("Maquina vai estar no segundo andar");
        }
        else if((terceiro>primeiro) && (terceiro>segundo))
        {
            Minutos = ((primeiro * 4) + (segundo * 2));
            printf("Voce vai demorar: %d minutos\n",Minutos);
            printf("Maquina vai estar no segundo ou terceiro andar");
        }
    }
    return 0;
}

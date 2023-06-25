#include <stdio.h>

int main() {
    int elevador, perido;
    int EA = 0, EB = 0, EC = 0;
    int EAM = 0, EBM = 0, ECM = 0;
    int EAV = 0, EBV = 0, ECV = 0;
    int EAN = 0, EBN = 0, ECN = 0;
    for(int i=0; i<3; i++){
        printf("informe o elevador que mais utiliza: (1)EA (2)EB (3)EC\n");
        scanf("%d", &elevador);

        switch (elevador) {
            case (1):
                EA++;
                printf("Qual horario? (1)M (2)V (3)N\n");
                scanf("%d", &perido);
                switch (perido) {
                    case(1):
                        EAM++;
                        break;
                    case(2):
                        EAV++;
                        break;
                    case(3):
                        EAN++;
                        break;
                    default:
                        printf("Entrada de dado invalida\n");
                        i=50;
                        break;
                }
                break;

            case (2):
                EB++;
                printf("Qual horario? (1)M (2)V (3)N\n");
                scanf("%d", &perido);
                switch (perido) {
                    case(1):
                        EBM++;
                        break;
                    case(2):
                        EBV++;
                        break;
                    case(3):
                        EBN++;
                        break;
                    default:
                        printf("Entrada de dado invalida\n");
                        i=50;
                        break;
                }
                break;

            case (3):
                EC++;
                printf("Qual horario? (1)M (2)V (3)N\n");
                scanf("%d", &perido);
                switch (perido) {
                    case(1):
                        ECM++;
                        break;
                    case(2):
                        ECV++;
                        break;
                    case(3):
                        ECN++;
                        break;
                    default:
                        printf("Entrada de dado invalida\n");
                        i=50;
                        break;
                }
                break;

            default:
                printf("Entrada de dado invalida\n");
                i=50;
                break;
        }
    }
    //EA MAIOR
    if(EA>EB && EA>EC){
        printf("O mais utilizado e o elevador EA no periodo ");
        if(EAM>EAV && EAM>EAN){
            printf("Matutino\n");
        }
       if(EAV>EAM && EAV>EAN){
           printf("Vatutino\n");
       }
       if(EAN>EAM && EAN>EAV){
           printf("Noturno\n");
       }
    }
    //EB MAIOR
    if(EB>EA && EB>EC){
        printf("O mais utilizado e o elevador EB no periodo ");
        if(EBM>EBV && EBM>EBN){
            printf("Matutino\n");
        }
        if(EBV>EAM && EBV>EBN){
            printf("Vatutino\n");
        }
        if(EBN>EBM && EBN>EBV){
            printf("Noturno\n");
        }
    }
    //EC MAIOR
    if(EC>EA && EC>EB){
        printf("O mais utilizado e o elevador EC no periodo ");
        if(ECM>ECV && ECM>ECN){
            printf("Matutino\n");
        }
        if(ECV>ECM && ECV>ECN){
            printf("Vatutino\n");
        }
        if(ECN>ECM && ECN>ECV){
            printf("Noturno\n");
        }
    }

    return 0;
}

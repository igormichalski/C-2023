#include <stdio.h>

void mostrar(int operacao, int ordem, float matriz[][ordem])
{
    if (operacao==999)
    printf("INVERSA\n");
    else {
        printf("Operação [%d]:\n", operacao);
    }
        for (int i = 0; i < ordem; i++) {
            for (int j = 0; j < ordem; j++) {
                printf("%.2f ", matriz[i][j]);
            }
            printf("\n");
        }

}


int main() {
    int operacao = 1;
    int ordem;

    //RECEBENDO O TAMANHO DA MATRIZ
    printf("Digite a ordem da matriz:\n");
    scanf("%d", &ordem);

    //INICIADA DEPOIS PARA TERMOS VALORES DE LINHA E COLUNA POSTO PELO USUARIO
    float matriz[ordem][ordem], inversa[ordem][ordem], aumentada[ordem][ordem*2];;

    //VALIDANDO TAMANHA DA MATRIZ
    if (ordem>0 && ordem<=10)
    {

        //RECEBENDO OS VALORES DA MATRIZ
        printf("Agora informe os valores da matriz\n");
        for (int i = 0; i < ordem; i++)
        {
            for (int j = 0; j < ordem; j++) {
                printf("Valor para A[%d][%d]: ", i+1, j+1);
                scanf("%f", &matriz[i][j]);
            }
        }

        //MOSTRA O VALOR DA MATRIZ
       // mostrar(0, ordem, matriz);

        //REALIZA PERMUTAÇÃO NA MATRIZ
        float aux;
        for (int i=0; i<ordem; i++) {
            if (matriz[i][i] == 0) {
                for (int j = i+1; j<ordem; j++) {
                    if (matriz[j][i] != 0) {
                        for (int k=0; k<ordem; k++) {
                            aux = matriz[i][k];
                            matriz[i][k] = matriz[j][k];
                            matriz[j][k] = aux;
                        }
                        mostrar(operacao, ordem, matriz);
                        operacao++;
                        break;
                    }
                }
            }
        }

        //INICIANDO MATRIZ AUMENTADA
        for (int i = 0; i < ordem; i++) {
            for (int j = 0; j < ordem; j++) {
                aumentada[i][j] = matriz[i][j];
            }
            for (int j = ordem; j < ordem*2; j++) {
                aumentada[i][j] = 0;
            }
            aumentada[i][i+ordem] = 1;
        }

        //
        float pivo;
        for (int i=0; i<ordem; i++) {
            pivo = aumentada[i][i];
            if (pivo!=0) {
                for (int j=0; j<ordem*2; j++) {
                    aumentada[i][j] /= pivo;
                }
                for (int j=0; j<ordem; j++) {
                    if (j!=i) {
                        aux = aumentada[j][i];
                        for (int k=0; k<ordem*2; k++) {
                            aumentada[j][k] -= aumentada[i][k] * aux;
                        }

                    }
                }
            }
        }

        //SEPARAR MATRIZ AUMENTADA
        for (int i = 0; i < ordem; i++) {
            for (int j = ordem; j < ordem*2; j++) {
                inversa[i][j-ordem] = aumentada[i][j];
            }
        }

        //MOSTRA O FINAL
        mostrar(999, ordem, inversa);

    }
    else{ //ELSE PARA CASO EM QUE MATRIZ É MENOR QUE 1X1 OU MAIOR QUE 10X10
        printf("Informe um valor >0 e <10 para a ordem e ordem\n");
    }
    return 0;
}

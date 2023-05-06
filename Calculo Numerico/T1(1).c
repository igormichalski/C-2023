#include <stdio.h>

void mostrar(int operacao, int ordem, double matriz[][ordem])
{
    if (operacao==999)
        printf("\nINVERSA\n");
    else {
        printf("\nOperacao [%d]:\n", operacao);
    }
    for (int i = 0; i < ordem; i++) {
        for (int j = 0; j < ordem; j++) {
            printf("%.2Lf ", matriz[i][j]);
        }
        printf("\n");
    }

}

void mostrar_aumentada(int operacao, int ordem, double matriz[][ordem*2]) {
    if (operacao == 999)
        printf("\nINVERSA\n");
    else {
        printf("\nOperacao [%d]:\n", operacao);
    }
    for (int i = 0; i < ordem; i++) {
        int contador = 0;
        for (int j = 0; j < ordem * 2+1; j++) {
            if (contador==ordem)
            {
                printf(" | ");
                contador=0;
            }
            else {
                printf("%.2Lf ", matriz[i][j]);
                contador++;
            }
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
    long double matriz[ordem][ordem], inversa[ordem][ordem], aumentada[ordem][ordem*2];;

    //VALIDANDO TAMANHA DA MATRIZ
    if (ordem>0 && ordem<=10)
    {

        //RECEBENDO OS VALORES DA MATRIZ
        printf("Agora informe os valores da matriz\n");
        for (int i = 0; i < ordem; i++)
        {
            for (int j = 0; j < ordem; j++) {
                printf("Valor para A[%d][%d]: ", i+1, j+1);
                scanf("%Lf", &matriz[i][j]);
            }
        }

        mostrar(0, ordem, matriz);


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

        //REALIZA PERMUTAÇÃO NA MATRIZ
        float aux;
        for (int i=0; i<ordem; i++) {
            if (aumentada[i][i] == 0) {
                for (int j = i+1; j<ordem; j++) {
                    if (aumentada[j][i] != 0) {
                        for (int k=0; k<ordem*2; k++) {
                            aux = aumentada[i][k];
                            aumentada[i][k] = aumentada[j][k];
                            aumentada[j][k] = aux;
                        }
                        mostrar(operacao, ordem, aumentada);
                        operacao++;
                        break;
                    }
                }
            }
        }

        float pivo;
        for (int i=0; i<ordem; i++) {
            pivo = aumentada[i][i];
            if (pivo != 0) {
                for (int j = 0; j < ordem * 2; j++) {
                    aumentada[i][j] /= pivo;
                }
                for (int j = 0; j < ordem; j++) {
                    if (j != i) {
                        aux = aumentada[j][i];
                        for (int k = 0; k < ordem * 2; k++) {
                            aumentada[j][k] -= aumentada[i][k] * aux;
                        }
                        mostrar_aumentada(operacao, ordem, aumentada);
                        operacao++;
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

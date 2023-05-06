#include <time.h>
#include <stdio.h>

void mostrar(int operacao, int ordem, double matriz[][ordem])
{
    if (operacao == 999)
        printf("\nINVERSA\n");
    else
        printf("\nOperacao [%d]:\n", operacao);
    for (int i = 0; i < ordem; i++) {
        for (int j = 0; j < ordem; j++)
            printf("%.2lf ", matriz[i][j]);
        printf("\n");
    }
}

void mostrar_aumentada(int operacao, int ordem, double matriz[][ordem * 2])
{
    if (operacao == 999)
        printf("\nINVERSA\n");
    else
        printf("\nOperacao [%d]:\n", operacao);
    for (int i = 0; i < ordem; i++) {
        for (int j = 0; j < ordem * 2; j++) {
                printf("%.2lf ", matriz[i][j]);
        }
        printf("\n");
    }
}

int main() {
    int operacao = 1;
    int ordem;

    // RECEBENDO O TAMANHO DA MATRIZ
    printf("Digite a ordem da matriz:\n");
    scanf("%d", &ordem);

    // INICIADA DEPOIS PARA TERMOS VALORES DE LINHA E COLUNA POSTO PELO USUARIO
    double matriz[ordem][ordem], inversa[ordem][ordem], aumentada[ordem][ordem * 2];

    // VALIDANDO TAMANHO DA MATRIZ
    if (ordem > 0 && ordem <= 10) {
        // RECEBENDO OS VALORES DA MATRIZ
        printf("Agora informe os valores da matriz:\n");
        for (int i = 0; i < ordem; i++) {
            for (int j = 0; j < ordem; j++) {
                printf("Valor para A[%d][%d]: ", i + 1, j + 1);
                scanf("%lf", &matriz[i][j]);
            }
        }

        mostrar(0, ordem, matriz);
        clock_t inicio = clock();
        // INICIANDO MATRIZ AUMENTADA
        for (int i = 0; i < ordem; i++) {
            for (int j = 0; j < ordem; j++)
                aumentada[i][j] = matriz[i][j];
            for (int j = ordem; j < ordem * 2; j++)
                aumentada[i][j] = 0;
            aumentada[i][i + ordem] = 1;
        }

        // REALIZA PERMUTAÇÃO NA MATRIZ
        double pivo;
        for (int k = 0; k < ordem; k++) {
            if (aumentada[k][k] == 0) {
                int i;
                for (i = k + 1; i < ordem; i++) {
                    if (aumentada[i][k] != 0) {
                        for (int j = 0; j < ordem * 2; j++) {
                            double temp = aumentada[k][j];
                            aumentada[k][j] = aumentada[i][j];
                            aumentada[i][j] = temp;
                        }
                        break;
                    }
                }
                if (i == ordem) {
                    printf("\nNão tem INVERSA!!.\n"); //sei que não precisa disso, mas quando perguntei já tinha feito k
                    return 0;
                }
            }

            //NORMALIZAÇÃO
            pivo = aumentada[k][k];
            for (int j = 0; j < ordem * 2; j++)
                aumentada[k][j] = aumentada[k][j] / pivo;

            //ELIMINAÇÃO
            for (int i = 0; i < ordem; i++) {
                if (i != k) {
                    double multiplo = aumentada[i][k];
                    for (int j = 0; j < ordem * 2; j++)
                        aumentada[i][j] = aumentada[i][j] - multiplo * aumentada[k][j];
                }
            }

            mostrar_aumentada(operacao, ordem, aumentada);
            operacao++;
        }
        clock_t fim = clock();
        // EXIBE A MATRIZ INVERSA
        for (int i = 0; i < ordem; i++) {
            for (int j = ordem; j < ordem * 2; j++)
                inversa[i][j - ordem] = aumentada[i][j];
        }
        mostrar(999, ordem, inversa);

        double tempo_decorrido = (double)(fim - inicio) / CLOCKS_PER_SEC;
        printf("\nTempo decorrido: %lf segundos\n", tempo_decorrido);

    } else
        printf("Informe uma ordem MAIOR que 0 e MENOR que 10.\n");
    return 0;
}

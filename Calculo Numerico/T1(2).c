#include <stdio.h>
#include <math.h>
#include <time.h>

int convergencia(int ordem, double matriz[ordem][ordem]) {
    double soma_linha, diagonal_principal;

    for (int i = 0; i < ordem; i++) {
        soma_linha = 0.0;
        diagonal_principal = fabs(matriz[i][i]);
        for (int j = 0; j < ordem; j++) {
            if (i != j) {
                soma_linha += fabs(matriz[i][j]);
            }
        }
        if (diagonal_principal <= soma_linha) {
            return 0;
        }
    }
    return 1;
}

void mostrar(int contador, int ordem, double matriz[][ordem], double t_idependentes[], double erro)
{
    printf("Operacao %d:\n\n", contador);
    for (int i = 0; i < ordem; i++) {
        for (int j = 0; j < ordem; j++) {
            printf("%.7lf ", matriz[i][j]);
        }
        printf("= %.7lf\n", t_idependentes[i]);
    }
    printf("\nErro: %.7lf\n", erro);
}

int main() {
    int ordem;

    //recebe a ordem
    printf("Informe a ordem da matriz: ");
    scanf("%d", &ordem);

    //vverifica a vvalidade da ordem
    if (ordem<=0 || ordem>10){
        printf("Informe um tamanho valido para matriz");
    }else {

        //declaradod depois para termos o tamanho correto da matriz
        double precisao;
        double matriz[ordem][ordem], t_idependentes[ordem], s_inicial[ordem];
        double nova_icognita[ordem];
        double erro;
        int contador=0, validar=0;
        clock_t inicio, fim;

        //O que vvem antes do = (matriz)
        printf("Informe os coeficientes da matriz A:\n");
        for (int i = 0; i < ordem; i++) {
            for (int j = 0; j < ordem; j++) {
                scanf("%lf", &matriz[i][j]);
            }
        }

        validar = convergencia(ordem, matriz);

        if (validar==0) {
            printf("Altere as linhas, pois o sistema nao converge.\n");
        } else { //ENTRADA

            //O que vem depois do sinal de =
            printf("Informe os termos independentes:\n");
            for (int i = 0; i < ordem; i++) {
                scanf("%lf", &t_idependentes[i]);
            }

            printf("Informe a precisao: ");
            scanf("%lf", &precisao);

            printf("Informe a solucao inicial:\n");
            for (int i = 0; i < ordem; i++) {
                scanf("%lf", &s_inicial[i]);
            }


            //Para marcar o tempo
            inicio = clock();

            do{
                erro = 0.0;

                for (int i = 0; i < ordem; i++) {
                    nova_icognita[i] = t_idependentes[i];

                    for (int j = 0; j < ordem; j++) {
                        if (j != i) {
                            nova_icognita[i] -= matriz[i][j] * s_inicial[j];
                        }
                    }

                    nova_icognita[i] = nova_icognita[i] / matriz[i][i];
                    erro += fabs(nova_icognita[i] - s_inicial[i]);
                    s_inicial[i] = nova_icognita[i];
                }

                //Mostrando informações de cada passo (implementar função)
                contador++;
                mostrar(contador,ordem, matriz, t_idependentes, erro);

            }while(erro > precisao);


            //finalizando timer e vendo valor de execusão
            fim = clock();
            double tempo_gasto = ((double) (fim - inicio)) / CLOCKS_PER_SEC;


            printf("\nSolucao:\n");
            for (int i = 0; i < ordem; i++) {
                printf("x[%d] = %.7lf\n", i, s_inicial[i]);
            }

            printf("Tempo gasto: %.7lf segundos\n", tempo_gasto);
        }
    }
    return 0;
}

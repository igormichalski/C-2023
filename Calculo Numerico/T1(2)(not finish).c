#include <stdio.h>
#include <math.h>
#include <time.h>

#define MAX_SIZE 10

int convergencia(int ordem, double A[ordem][ordem]) {
    double soma_linha, diagonal_principal;

    for (int i = 0; i < ordem; i++) {
        soma_linha = 0.0;
        diagonal_principal = fabs(A[i][i]);
        for (int j = 0; j < ordem; j++) {
            if (i != j) {
                soma_linha += fabs(A[i][j]);
            }
        }
        if (diagonal_principal <= soma_linha) {
            return 0;
        }
    }
    return 1;
}

void jacobi(int ordem, double A[ordem][ordem], double b[ordem], double x[ordem], double precisao) {
    double x_new[ordem];
    double error;
    int iterations = 0;
    clock_t start_time, end_time;
    double execution_time;

    start_time = clock();

    do {
        error = 0.0;

        for (int i = 0; i < ordem; i++) {
            x_new[i] = b[i];

            for (int j = 0; j < ordem; j++) {
                if (j != i) {
                    x_new[i] -= A[i][j] * x[j];
                }
            }

            x_new[i] /= A[i][i];
            error += fabs(x_new[i] - x[i]);
            x[i] = x_new[i];
        }

        iterations++;

        printf("Passo %d:\n", iterations);
        printf("Sistema:\n");
        for (int i = 0; i < ordem; i++) {
            for (int j = 0; j < ordem; j++) {
                printf("%.7lf ", A[i][j]);
            }
            printf("| %.7lf\n", b[i]);
        }

        printf("Erro: %.7lf\n", error);

    } while (error > precisao);

    end_time = clock();
    execution_time = ((double) (end_time - start_time)) / CLOCKS_PER_SEC;

    printf("\nSolução:\n");
    for (int i = 0; i < ordem; i++) {
        printf("x[%d] = %.7lf\n", i, x[i]);
    }

    printf("Tempo de execução: %.7lf segundos\n", execution_time);
}

int main() {
    int ordem;

    //recebe a ordem
    printf("Informe a ordem da matriz (máximo 10): ");
    scanf("%d", &ordem);

    //vverifica a vvalidade da ordem
    if (ordem<=0 || ordem>10){
        printf("Informe um tamanho valido para matriz");
    }else {

        //declaradod depois para termos o tamanho correto da matriz
        double precisao;
        double matriz[ordem][ordem];
        double t_idependentes[ordem];
        double s_inicial[ordem];

        //O que vvem antes do = (matriz)
        printf("Informe os coeficientes da matriz A:\n");
        for (int i = 0; i < ordem; i++) {
            for (int j = 0; j < ordem; j++) {
                scanf("%lf", &matriz[i][j]);
            }
        }

        if (!convergencia(ordem, matriz)) {
            printf("Altere as linhas, pois o sistema nao converge.\n");
        } else {

            //O que vem depois do sinal de =
            printf("Informe os termos independentes (vetor b):\n");
            for (int i = 0; i < ordem; i++) {
                scanf("%lf", &t_idependentes[i]);
            }

            printf("Informe a precisao: ");
            scanf("%lf", &precisao);

            printf("Informe a solucao inicial:\n");
            for (int i = 0; i < ordem; i++) {
                scanf("%lf", &s_inicial[i]);
            }

            jacobi(ordem, matriz, t_idependentes, s_inicial, precisao);
        }
    }
    return 0;
}

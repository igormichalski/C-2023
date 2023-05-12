#include <stdio.h>

int main() {
    int ordem;
    float precisao;
    // RECEBENDO DADOS INICIAIS
    printf("Digite a precisão:\n");
    scanf("%f", &precisao);
    
    printf("Digite a ordem da matriz:\n");
    scanf("%d", &ordem);


    float matriz[ordem][ordem];
        // RECEBENDO OS VALORES DA MATRIZ
        printf("Agora informe os valores da matriz:\n");
        for (int i = 0; i < ordem; i++) {
            for (int j = 0; j < ordem; j++) {
                printf("Valor para A[%d][%d]: ", i + 1, j + 1);
                scanf("%f", &matriz[i][j]);
            }
        }

    return 0;
}

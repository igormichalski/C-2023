#include <stdio.h>

int main() {

    int freqEA = 0, freqEB = 0, freqEC = 0;

    int AperiodoM = 0, BperiodoM = 0, CperiodoM = 0;
    int AperiodoV = 0, BperiodoV = 0, CperiodoV  = 0;
    int AperiodoN = 0, BperiodoN = 0, CperiodoN = 0;
    int somaM = 0, somaV = 0, somaN = 0;

    char elevador;
    char periodo;

    for (int i=0;i<50;i++) {
        //ENTRADAS
        printf("Qual o elevador que utiliza com mais frequencia? (A, B ou C)\n");
        fflush(stdin);
        scanf("%c", &elevador);

        printf("Qual o perIodo que mais utiliza o elevador? (M = Matutino, V = Vespertino, N = Noturno)\n");
        fflush(stdin);
        scanf("%c", &periodo);

        switch (elevador) {

            case 'A':
                freqEA++;
                switch (periodo) {
                    case 'M':
                        AperiodoM++;
                        break;
                    case 'V':
                        AperiodoV++;
                        break;
                    case 'N':
                        AperiodoN++;
                        break;
                }
                break;


            case 'B':
                freqEB++;
                switch (periodo) {
                    case 'M':
                        BperiodoM++;
                        break;
                    case 'V':
                        BperiodoV++;
                        break;
                    case 'N':
                        BperiodoN++;
                        break;
                }
                break;


            case 'C':
                freqEC++;
                switch (periodo) {
                    case 'M':
                        CperiodoM++;
                        break;
                    case 'V':
                        CperiodoV++;
                        break;
                    case 'N':
                        CperiodoN++;
                        break;
                }
                break;
        }
    }


    // Verificação do elevador mais frequentado
    char elevadorMaisFrequentado;

    if (freqEA >= freqEB && freqEA >= freqEC) {
        elevadorMaisFrequentado = 'A';
    } else if (freqEB >= freqEA && freqEB >= freqEC) {
        elevadorMaisFrequentado = 'B';
    } else {
        elevadorMaisFrequentado = 'C';
    }


    // Verificação do período mais frequente para o elevador mais utilizado
    char periodoMaisFrequente;

    if (elevadorMaisFrequentado == 'A') {
        if (AperiodoM >= AperiodoV && AperiodoM >= AperiodoN) {
            periodoMaisFrequente = 'M';
        } else if (AperiodoV >= AperiodoM && AperiodoV >= AperiodoN) {
            periodoMaisFrequente = 'V';
        } else {
            periodoMaisFrequente = 'N';
        }
    } else if (elevadorMaisFrequentado == 'B') {
        if (BperiodoM >= BperiodoV && BperiodoM >= BperiodoN) {
            periodoMaisFrequente = 'M';
        } else if (BperiodoV >= BperiodoM && BperiodoV >= BperiodoN) {
            periodoMaisFrequente = 'V';
        } else {
            periodoMaisFrequente = 'N';
        }
    } else {
        if (CperiodoM >= CperiodoV && CperiodoM >= CperiodoN) {
            periodoMaisFrequente = 'M';
        } else if (CperiodoV >= CperiodoM && CperiodoV >= CperiodoN) {
            periodoMaisFrequente = 'V';
        } else {
            periodoMaisFrequente = 'N';
        }
    }


    //Soma de todos os periodos
    somaM = AperiodoM + BperiodoM + CperiodoM;
    somaV = AperiodoV + BperiodoV + CperiodoV;
    somaN = AperiodoN + BperiodoN + CperiodoN;

    char periodoMaisFrequenteTotal;

    if (somaM >= somaV && somaM >= somaN) {
        periodoMaisFrequenteTotal = 'M';
    } else if (somaV >= somaM && somaV >= somaN) {
        periodoMaisFrequenteTotal = 'V';
    } else {
        periodoMaisFrequenteTotal = 'N';
    }


    //SAIDAS
    printf("Resposta 1:\n");
    printf("O elevador mais frequentado é: %c\n", elevadorMaisFrequentado);
    printf("O período mais frequente para o elevador mais utilizado é: %c\n", periodoMaisFrequente);

    printf("Resposta 2:\n");
    printf("O período com maior fluxo é: %c\n", periodoMaisFrequenteTotal);

    return 0;
}

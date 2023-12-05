#include <stdio.h>

int main() {
    
    /*2)Em um prédio, com 50 moradores, há três elevadores denominados A, B e C. Para otimizar o sistema de controle dos elevadores, foi realizado um levantamento no qual cada usuário respondia: 
    o elevador que utilizava com mais frequência; 
    o período que utilizava o elevador, entre:
    “M” = matutino; 
    “V” = vespertino; 
    “N” = noturno. 
    Construa um algoritmo que calcule e imprima:
    qual o período mais usado de todos e a que elevador pertence;
    qual é o elevador mais frequentado e em que período se concentra o maior fluxo;
    qual a diferença percentual entre o mais usado dos horários e o menos usado;
    qual a percentagem sobre o total de serviços prestados do elevador de média utilização. */

    int moradores = 5;
    char elevador, periodo;
    int freq_AM = 0, freq_AV = 0, freq_AN = 0;
    int freq_BM = 0, freq_BV = 0, freq_BN = 0;
    int freq_CM = 0, freq_CV = 0, freq_CN = 0;

    for (int i = 0; i < moradores; i++) {
        printf("Morador %d:\n", i + 1);
        printf("Elevador mais utilizado (A/B/C): ");
        scanf(" %c", &elevador);
        fflush(stdin);

        printf("Período mais utilizado (M/V/N): ");
        scanf(" %c", &periodo);
        fflush(stdin);

        if (elevador == 'A') {
            if (periodo == 'M') {
                freq_AM++;
            } else if (periodo == 'V') {
                freq_AV++;
            } else if (periodo == 'N') {
                freq_AN++;
            }
        } else if (elevador == 'B') {
            if (periodo == 'M') {
                freq_BM++;
            } else if (periodo == 'V') {
                freq_BV++;
            } else if (periodo == 'N') {
                freq_BN++;
            }
        } else if (elevador == 'C') {
            if (periodo == 'M') {
                freq_CM++;
            } else if (periodo == 'V') {
                freq_CV++;
            } else if (periodo == 'N') {
                freq_CN++;
            }
        } else {
            printf("Entrada inválida. Tente novamente.\n");
            i--; 
        }
    }

    //Período mais usado de todos e a que elevador pertence
    int total_M = freq_AM + freq_BM + freq_CM;
    int total_V = freq_AV + freq_BV + freq_CV;
    int total_N = freq_AN + freq_BN + freq_CN;

    char periodo_mais_usado;
    char elevador_periodo_mais_usado;

    if (total_M >= total_V && total_M >= total_N) {
        periodo_mais_usado = 'M';
        if (freq_AM >= freq_BM && freq_AM >= freq_CM) {
            elevador_periodo_mais_usado = 'A';
        } else if (freq_BM >= freq_AM && freq_BM >= freq_CM) {
            elevador_periodo_mais_usado = 'B';
        } else {
            elevador_periodo_mais_usado = 'C';
        }
    } else if (total_V >= total_M && total_V >= total_N) {
        periodo_mais_usado = 'V';
        if (freq_AV >= freq_BV && freq_AV >= freq_CV) {
            elevador_periodo_mais_usado = 'A';
        } else if (freq_BV >= freq_AV && freq_BV >= freq_CV) {
            elevador_periodo_mais_usado = 'B';
        } else {
            elevador_periodo_mais_usado = 'C';
        }
    } else {
        periodo_mais_usado = 'N';
        if (freq_AN >= freq_BN && freq_AN >= freq_CN) {
            elevador_periodo_mais_usado = 'A';
        } else if (freq_BN >= freq_AN && freq_BN >= freq_CN) {
            elevador_periodo_mais_usado = 'B';
        } else {
            elevador_periodo_mais_usado = 'C';
        }
    }

    printf("\n1. Periodo mais usado de todos: %c (Elevador %c)\n", periodo_mais_usado, elevador_periodo_mais_usado);

    // Elevador mais frequentado e em que período se concentra o maior fluxo
    int total_A = freq_AM + freq_AV + freq_AN;
    int total_B = freq_BM + freq_BV + freq_BN;
    int total_C = freq_CM + freq_CV + freq_CN;

    char elevador_mais_frequentado;
    char periodo_elevador_mais_frequentado;

    if (total_A >= total_B && total_A >= total_C) {
        elevador_mais_frequentado = 'A';
        if (freq_AM >= freq_AV && freq_AM >= freq_AN) {
            periodo_elevador_mais_frequentado = 'M';
        } else if (freq_AV >= freq_AM && freq_AV >= freq_AN) {
            periodo_elevador_mais_frequentado = 'V';
        } else {
            periodo_elevador_mais_frequentado = 'N';
        }
    } else if (total_B >= total_A && total_B >= total_C) {
        elevador_mais_frequentado = 'B';
        if (freq_BM >= freq_BV && freq_BM >= freq_BN) {
            periodo_elevador_mais_frequentado = 'M';
        } else if (freq_BV >= freq_BM && freq_BV >= freq_BN) {
            periodo_elevador_mais_frequentado = 'V';
        } else {
            periodo_elevador_mais_frequentado = 'N';
        }
    } else {
        elevador_mais_frequentado = 'C';
        if (freq_CM >= freq_CV && freq_CM >= freq_CN) {
            periodo_elevador_mais_frequentado = 'M';
        } else if (freq_CV >= freq_CM && freq_CV >= freq_CN) {
            periodo_elevador_mais_frequentado = 'V';
        } else {
            periodo_elevador_mais_frequentado = 'N';
        }
    }

    printf("\n2. Elevador mais frequentado: %c (Periodo %c)\n", elevador_mais_frequentado, periodo_elevador_mais_frequentado);

    //Diferença percentual entre o mais usado dos horários e o menos usado
    int percentual_menos_usado, percentual_mais_usado, diferenca_percentual;

    if (total_M <= total_V && total_M <= total_N) {
        percentual_menos_usado = (total_M * 100) / moradores;
    } else if (total_V <= total_M && total_V <= total_N) {
        percentual_menos_usado = (total_V * 100) / moradores;
    } else {
        percentual_menos_usado = (total_N * 100) / moradores;
    }

    if (total_M >= total_V && total_M >= total_N) {
        percentual_mais_usado = (total_M * 100) / moradores;
    } else if (total_V >= total_M && total_V >= total_N) {
        percentual_mais_usado = (total_V * 100) / moradores;
    } else {
        percentual_mais_usado = (total_N * 100) / moradores;
    }

    diferenca_percentual = percentual_mais_usado - percentual_menos_usado;

    printf("\n3. Diferenca percentual entre o mais usado e o menos usado: %d%%\n", diferenca_percentual);

    // Percentagem sobre o total de serviços prestados do elevador de média utilização
    int total_media_utilizacao;

    if ((total_A >= total_B && total_A <= total_C) || (total_A >= total_C && total_A <= total_B)) {
        total_media_utilizacao = total_A;
    } else if ((total_B >= total_A && total_B <= total_C) || (total_B >= total_C && total_B <= total_A)) {
        total_media_utilizacao = total_B;
    } else {
        total_media_utilizacao = total_C;
    }

    int percentagem_media_utilizacao = (total_media_utilizacao * 100) / moradores;

    printf("\n4. Percentagem sobre o total de serviços prestados do elevador de média utilizacao: %d%%\n", percentagem_media_utilizacao);

}



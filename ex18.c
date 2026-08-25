#include <stdio.h>

int main() {
    float horas_extras_min, horas_falta_min;
    float h_min;
    int premio;

    // 1. Entrada de dados em minutos
    printf("Digite o numero de horas extras (em minutos): ");
    scanf("%f", &horas_extras_min);

    printf("Digite o numero de horas-falta (em minutos): ");
    scanf("%f", &horas_falta_min);

    // 2. Calculo do H (em minutos)
    // Utiliza-se 2.0 / 3.0 para garantir a divisao em ponto flutuante
    h_min = horas_extras_min - ((2.0 / 3.0) * horas_falta_min);

    // 3. Verificacao na tabela de premios
    // O simbolo __| na tabela indica um intervalo aberto à esquerda e fechado à direita: (a, b]
    // A primeira linha contém um provável erro de digitação na imagem (> 240), assumimos > 2400 pela lógica da tabela.
    if (h_min > 2400) {
        premio = 500;
    } else if (h_min > 1800 && h_min <= 2400) {
        premio = 400;
    } else if (h_min > 1200 && h_min <= 1800) {
        premio = 300;
    } else if (h_min > 600 && h_min <= 1200) {
        premio = 200;
    } else {
        premio = 100;
    }

    printf("\n--- Resultados ---\n");
    printf("Horas extras (em horas): %.2f\n", horas_extras_min / 60.0);
    printf("Horas-falta (em horas): %.2f\n", horas_falta_min / 60.0);
    
    // Imprimindo o valor do prêmio
    printf("Valor do premio: R$ %d.00\n", premio);

    return 0;
}
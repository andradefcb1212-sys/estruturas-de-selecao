#include <stdio.h>

int main() {

    int angulo;

    printf("Insira o ângulo desejado: \n");
    scanf("%d", &angulo);

    if ((angulo > 0 && angulo < 90) || (angulo < -270 && angulo >= -360)) {
        printf("O ângulo %d° está no 1° quadrante.\n", angulo);
    } else if ((angulo > 90 && angulo < 180) || (angulo < -180 && angulo >= -270)) {
        printf("O ângulo %d° está no 2° quadrante.\n", angulo);
    } else if ((angulo > 180 && angulo < 270) || (angulo < -90 && angulo >= -180)) {
        printf("O ângulo %d° está no 3° quadrante.\n", angulo);
    } else if ((angulo > 270 && angulo < 360) || (angulo < 0 && angulo >= -90)) {
        printf("O ângulo %d° está no 4° quadrante.\n", angulo);
    } else if (angulo == 0 || angulo == 90 || angulo == 180 || angulo == 270 || angulo == 360 || angulo == -90 || angulo == -180 || angulo == -270 || angulo == -360) {
        printf("O ângulo %d° está sobre um dos eixos.\n", angulo);
    } else {
        printf("Insira um ângulo entre -360° e 360°!\n");
    }

    return 0;
}
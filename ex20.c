#include <stdio.h>
#include <math.h>
#include <windows.h>


int main(){

    SetConsoleCP(65001);
    SetConsoleOutputCP(65001);

    //ax²+bx + c = 0
    float a, b, c;
    float x1 = 0, x2 = 0, delta = 0;

    printf("Insira o valor de a: \n");
    scanf("%f", &a);
    printf("Insira o valor de b: \n");
    scanf("%f", &b);
    printf("Insira o valor de c: \n");
    scanf("%f", &c);

    printf("---------------------------\n");
    printf("Equação: %.2fx² + %.2fx + %.2f = 0\n", a, b, c);
    printf("---------------------------\n");

    if (a == 0) {
        printf("Coeficiente 'a' não pode ser zero em uma equação do 2° grau!\n");
        return 0;
    }

    delta = (pow(b, 2)) - 4 * a * c;

    if (delta < 0) {
        printf("Não existem raízes reais (delta = %.2f).\n", delta);
    } else if (delta == 0) {
        x1 = -b / (2 * a);
        printf("Raiz única: X = %.2f\n", x1);
    } else {
        x1 = (-b + sqrt(delta)) / (2 * a);
        x2 = (-b - sqrt(delta)) / (2 * a);
        printf("X1 = %.2f\n", x1);
        printf("X2 = %.2f\n", x2);
    }

    return 0;
}
#include <stdio.h>
#include <windows.h>

int main(){
    SetConsoleOutputCP(65001);
    SetConsoleCP(65001);

    float a, b, c;
    printf("Insira o lado A: ");
    scanf("%f", &a);
    printf("Insira o lado B: ");
    scanf("%f", &b);
    printf("Insira o lado C: ");
    scanf("%f", &c);

    //Processamento
    if((a < b+c) && (b < a+c) && (c < a+b)){
        if (a == b && b == c){
            printf("Triângulo Equilárero!\n");
        } else if (a == b || a == c || b == c){
            printf("Triângulo Isósceles!\n");
        } else {
            printf("Triângulo Escaleno!\n");
        }
    } else {
        printf("Os lados fornecidos não são característicos de um triângulo!\n");
    }
}

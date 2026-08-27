#include <stdio.h>
#include <windows.h>

int main (){
    SetConsoleOutputCP(65001);
    SetConsoleCP(65001);

    //Declaração
    int numero;

    //Entrada de dados
    printf("Insira um número: \n");
    scanf("%d", &numero);

    //Processamento e Saída
    if (numero > 0) {
        printf("Número POSITIVO!");
    } else {
        if (numero < 0) {
            printf("Número NEGATIVO!");
        } else if (numero == 0) {
            printf("Número igual a ZERO!");
        }
    }
    return 0;
}
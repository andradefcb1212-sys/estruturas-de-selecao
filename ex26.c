#include <stdio.h>
#include <windows.h>
#include <string.h>

int main(){
    SetConsoleCP(65001);
    SetConsoleOutputCP(65001);

    //Declaração de Variáveis
    int n1, n2;
    char operador[2];
    int resultado;

    //Entrada de dados
    printf("Digite o primeiro número: \n");
    scanf("%d", &n1);
    printf("Escolha o operador (+, -, *, /): \n");
    scanf("%s", operador);
    printf("Digite o segundo número: \n");
    scanf("%d", &n2);

    printf("\n%d %s %d = \n", n1, operador, n2);

    //Processamento
    if (strcmp(operador, "+") == 0) {
        resultado = n1 + n2;
    } else if (strcmp(operador, "-") == 0){
        resultado = n1 - n2;
    } else if (strcmp(operador, "*") == 0) {
        resultado = n1 * n2;
    } else if (strcmp(operador, "/") == 0) {
        if (n2 == 0) {
            printf("Operação Inválida!\n");
        }else{
            resultado = n1 / n2;
        }
    } else {
        printf("Insira um operador válido!\n");
    }

    //Saída de dados
    printf("O resultado da sua operação é igual a: %d", resultado);
    return 0;
}
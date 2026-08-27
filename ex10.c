#include <stdio.h>

int main(){
    //Declaração de Variáveis
    int numero;
    int resultado = 0;
    
    //Entrada
    printf("Insira um número inteiro: \n");
    scanf("%d", &numero);
    
    //Processamento
    resultado = numero % 2;
    
    //Condicionais e Saídas
    if (resultado == 0) {
        printf("Número Par!");
    } else {
        printf("Número Ímpar!");
    }
    return 0;
}
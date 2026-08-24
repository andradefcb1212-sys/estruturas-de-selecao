#include <stdio.h>


int main(){
    //Declaração de Variáveis
    int idade;
    
    //Entrada de dados
    printf("Insira a sua idade: \n");
    scanf("%d", &idade);
    
    //Processamento e saída
    if (idade < 18) {
        printf("Você é menor de idade!");
    } else {
        printf("Você é maior de idade!");
    }
    return 0;
}
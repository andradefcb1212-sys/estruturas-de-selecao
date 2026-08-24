#include <stdio.h>

int main(){
    //Declaração de Variáveis
    int idade;
    
    //Entrada de dados
    printf("Insira a sua idade: \n");
    scanf("%d", &idade);
    
    //Condicionais e saídas
    if (idade >= 0 && idade <= 2){
        printf("Você é um RECÉM-NASCIDO!");
    } else if (idade >= 3 && idade <= 11) {
        printf("Você é uma CRIANÇA!");
    } else if (idade >= 12 && idade <= 19) {
        printf("Você é um(a) ADOLESCENTE!");
    } else if (idade >= 20 && idade <= 55) {
        printf("Você é um(a) ADULTO(A)!");
    } else if (idade > 55) {
        printf("Você é um IDOSO!");
    }
    return 0;
}
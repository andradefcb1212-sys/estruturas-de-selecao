#include <stdio.h>

int main(){
    //Declaração de Variáveis
    int idade;
    
    //Entrada de dados
    printf("Insira a sua idade: \n");
    scanf("%d", &idade);
    
    //Condicionais e Saída
    if (idade <= 7 && idade >= 5) {
        printf("Você é um atleta da categoria Infantil A!");
    } else if (idade <= 10 && idade >= 8) {
        printf("Você é um atleta da categoria Infantil B!");
    } else if (idade <= 13 && idade >= 11) {
        printf("Você é um atleta da categoria Juvenil A!");
    } else if (idade <= 17 && idade >= 14) {
        printf("Você é um atleta de categoria Juvenil B!");
    } else if (idade >= 18) {
        printf("Você é um atleta da categoria Sênior!");
    } else {
        printf("Você não está apto para nenhuma categoria!");
    }
    return 0;
}
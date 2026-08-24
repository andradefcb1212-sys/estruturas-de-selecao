#include <stdio.h>

int main(){
    //Declaração de Variáveis
    float n1, n2, n3;
    float media = 0;
    
    //Entrada de dados
    printf("Insira a primeira nota: \n");
    scanf("%f", &n1);
    printf("Insira a segunda nota: \n");
    scanf("%f", &n2);
    printf("insira a terceira nota: \n");
    scanf("%f", &n3);
    
    //Processamento
    media = (n1 + n2 + n3) / 3;
    
    //Condicionais e saídas
    if (media < 5 && media >= 0) {
        printf("Você está REPROVADO!");
    } else if (media < 7 && media >= 5) {
        printf("Você está em EXAME FINAL!");
    } else {
        printf("Você está APROVADO!");
    }
    return 0;
}
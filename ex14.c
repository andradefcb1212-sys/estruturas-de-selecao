#include <stdio.h>

int main(){
    //Declaração de Variáveis
    int codigo;
    
    //Entrada
    printf("Insira o código da sua ocupação (1 a 5): \n");
    scanf("%d", &codigo);
    
    //Condicionais, Processamento e Saída
    if (codigo == 1) {
        printf("O seu cargo é de ESCRITUÁRIO e você tem direito a 50%% de aumento!");
    } else if (codigo == 2) {
        printf("O seu cargo é de SECRETÁRIO e você tem direito a 35%% de aumento!");
    } else if (codigo == 3) {
        printf("O seu cargo é de CAIXA e você tem direito a 20%% de aumento!");
    } else if (codigo == 4) {
        printf("O seu cargo é de GERENTE e você tem direito a 10%% de aumento!");
    } else if (codigo == 5) {
        printf("O seu cargo é de DIRETOR e você não tem direito de aumento.");
    }
    return 0;
}
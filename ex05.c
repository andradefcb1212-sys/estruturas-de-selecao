#include <stdio.h>

int main(){
    //Declaração de Variáveis
    float salario;
    float reajuste = 0;
    
    //Entrada de dados
    printf("Insira o seu salário: \n");
    scanf("%f", &salario);
    
    //Processamento e saída
    if (salario > 300) {
        reajuste = salario * 1.3;
        printf("O seu salário após o reajuste será igual a R$%.2f", reajuste);
    } else {
        reajuste = salario * 1.5;
        printf("O seu salário após o reajuste será igual a R$%.2f", reajuste);
    }
    return 0;
}
#include <stdio.h>

int main(){
    //Declaração de Variáveis
    float salario;
    float reajuste = 1.3;
    float reajustado = 0;
    
    //Entrada de dados
    printf("Insira o seu salário: \n");
    scanf("%f", &salario);
     
    //Processamento com cálculo condicional e saídas 
    if (salario < 500) {
        printf("Você tem direito ao reajuste salarial!!!\n");
        reajustado = salario * reajuste;
        printf("O seu novo salário após o reajuste será de R$%.2f\n", reajustado);
    } else {
        printf("Você não tem direito ao reajuste salarial.");
    }
    return 0;
}
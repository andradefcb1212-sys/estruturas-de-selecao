#include <stdio.h>
#include <windows.h>

int main(){
    SetConsoleOutputCP(65001);
    SetConsoleCP(65001);

    //Declaração de Variáveis
    float salario_minimo, salario_bruto = 0;
    int horas_trabalhadas, dependentes_funcionario, acresc_dependentes, horas_extras;
    float salario_mes = 0, salario_final = 0, valor_hora = 0, valor_extras = 0;
    float irrf = 0, gratificacao = 0, salario_total = 0;

    //Entrada de dados
    printf("Insira o valor do salário mínimo: \n");
    scanf("%f", &salario_minimo);
    printf("Insira a quantidade de horas trabalhadas: \n");
    scanf("%d", &horas_trabalhadas);
    printf("Insira a quantidade de dependentes: \n");
    scanf("%d", &dependentes_funcionario);

    //Processamento
    valor_hora = (1/5 * salario_minimo);
    salario_mes = horas_trabalhadas * valor_hora;
    acresc_dependentes = dependentes_funcionario * 32;
    valor_extras = horas_extras * (1.5 *valor_hora);
    salario_bruto = salario_mes + acresc_dependentes + valor_extras;
    
    //Condicionais
    if (salario_bruto < 200) {
        irrf = 0;
    } else if (salario_bruto >= 200 && salario_bruto >= 500) {
        irrf = 0.1 * salario_bruto;
    } else if (salario_bruto > 500) {
        irrf = 0.2 * salario_bruto;
    }

    //Processamento 
    salario_final = salario_bruto - irrf;
    
    //Condicional
    if (salario_final > 350) {
        gratificacao = 50;
    } else {
        gratificacao = 100;
    }

    salario_total = salario_final + gratificacao;

    //Saída + Condicional + Saída
    printf("O salário bruto é igual a R$%.2f\n", salario_bruto);
    if (irrf > 0){
        printf("O IRRF é no valor de R$%.2f\n", irrf);
    } else {
        printf("Você não pagará IRRF.\n");
    }
    printf("O salário líquido é igual a R$%.2f\n", salario_final);
    printf("O salário final + a gratificação ficará no valor de R$%.2f\n", salario_total);

    return 0;
}
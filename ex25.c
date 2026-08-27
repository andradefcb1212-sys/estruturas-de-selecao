#include <stdio.h>
#include <windows.h>

int main(){
    SetConsoleOutputCP(65001);
    SetConsoleCP(65001);

    //Declaração de Variáveis
    float valor, desconto = 0, valor_final = 0, juros = 0;
    int metodo;

    //Entrada de dados
    printf("Insira o valor do produto que vai ser pago: \n");
    scanf("%f", &valor);

    //Menu de escolha
    printf("--------------------------------------------\n");
    printf("------ESCOLHA UMA FORMA DE PAGAMENTO--------\n");
    printf("--------------------------------------------\n");
    printf("1 - Á vista em dinheiro ou cheque\n");
    printf("2 - À vista no cartão de crédito\n");
    printf("3 - Em 2x no cartão\n");
    printf("4 - Em 3x no cartão\n");
    printf("--------------------------------------------\n");
    scanf("%d", &metodo);

    //Processamento + Condicional + Saída
    if (metodo == 1) {
        desconto = valor * 0.9;
        printf("O valor da compra ficará em R$%.2f", desconto);
    } else if (metodo == 2) {
        desconto = valor * 0.95;
        printf("O valor da compra ficará em R$%.2f", desconto);
    } else if (metodo == 3) {
        valor_final = valor / 2;
        printf("O valor da compra ficará em 2 parcelas de R$%.2f cada.", valor_final);
    } else if (metodo == 4) {
        juros = 0.1 * valor;
        valor_final = (valor + juros) / 3;
        printf("O valor da compra ficará em 3 parcelas de R$%.2f cada.", valor_final);
    }
    return 0;
}
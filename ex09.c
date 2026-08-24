#include <stdio.h>

int main(){
    //Declaração de Variáveis
    float valor;
    int codigo;
    
    //Entrada de dados
    printf("Insira o valor do produto: \n");
    scanf("%f", &valor);
    printf("Insira o código do produto (1 a 30): \n");
    scanf("%d", &codigo);
    
    //Processamento e Condicionais + Saídas
    if (codigo == 1){
        printf("Procedência: Sul");
    } else if(codigo == 2){
        printf("Procedência: Norte");
    } else if (codigo == 3) {
        printf("Procedência: Leste");
    } else if (codigo == 4) {
        printf("Procedência: Oeste");
    } else if (codigo == 5 || codigo == 6) {
        printf("Procedência: Nordeste");
    } else if (codigo == 7 || codigo == 8 || codigo == 9) {
        printf("Procedência: Sudeste");
    } else if (codigo >= 10 && codigo <= 20) {
        printf("Procedência: Centro-Oeste");
    } else if (codigo >= 21 && codigo <= 30) {
        printf("Procedência: Nordeste");
    } else {
        printf("Código não encontrado. Digite um valor válido!");
    }
    return 0;
}
#include <stdio.h>
#include <math.h>
#include <windows.h>

int main(){
    SetConsoleCP(65001);
    SetConsoleOutputCP(65001);
    
    //Declaração das Variáveis
    float n1, n2, soma = 0;
    int raiz, valor, comando;

    //Menu + Entrada de seleção da operação
    printf("------------------------------\n");
    printf("--------MENU PRINCIPAL--------\n");
    printf("------------------------------\n");
    printf("1 - Somar\n");
    printf("2 - Raiz Quadrada\n");
    printf("3 - Finalizar\n");
    scanf("%d", &comando);

    //Processamento + Saída de informação 
    if (comando == 1){
        printf("A opção escolhida foi SOMA!\n");
        printf("Insira o primeiro valor: \n");
        scanf("%f", &n1);
        printf("Insira o segundo valor: \n");
        scanf("%f", &n2);
        soma = n1 + n2;
        printf("O valor da soma de %.2f + %.2f é igual a %.2f", n1, n2, soma);
    } else if (comando == 2){
        printf("A opção escolhida foi RAIZ QUADRADA!\n");
        printf("Insira o valor que você deseja saber a raiz: \n");
        scanf("%d", &valor);
        raiz = sqrt(valor);
        printf("O valor da raiz de %d é igual a %d\n", valor, raiz);
    } else if (comando == 3){
        printf("Programa Finalizado!\n");
    } else {
        printf("Escolha uma opção válida!\n");
    }
    return 0;
}
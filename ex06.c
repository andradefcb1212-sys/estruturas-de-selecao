#include <stdio.h>
#include <string.h>

int main(){
    //Declaração de Variáveis
    float altura;
    char sexo[1];
    float peso = 0;
    
    //Entrada de dados
    printf("Insira o seu sexo (M ou F): \n");
    scanf("%s", &sexo);
    printf("Insira a sua altura (em metros): \n");
    scanf("%f", &altura);
    
    //Processamento e saída
    if (strcmp(sexo, "M") == 0) {
        peso = (72.7 * altura) - 58;
        printf("O seu peso ideal é: %.2f", peso);
    } else {
        peso = (62.1 * altura) - 44.7;
        printf("O seu peso ideal é: %.2f", peso);
    }
    return 0;
}
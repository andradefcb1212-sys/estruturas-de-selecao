#include <stdio.h>

int main(){
    //Declaração de variáveis
    float n1, n2, n3, n4;
    float media = 0;

    //Entrada de dados
    printf("Insira a Nota 1: \n");
    scanf("%f", &n1);
    printf("Insira a Nota 2: \n");
    scanf("%f", &n2);
    printf("Insira a Nota 3: \n");
    scanf("%f", &n3);
    printf("Insira a Nota 4: \n");
    scanf("%f", &n4);
    
    //Processamento
    media = (n1 + n2 + n3 + n4) / 4;
    
    //Saída condicional
    if (media >= 7.0){
        printf("O aluno foi aprovado com a média igual a: %.2f", media);
    } else {
        printf("O aluno foi reprovado pois a sua média foi: %.2f", media);
    }
    return 0;
}
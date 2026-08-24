#include <stdio.h>

int main(){
    //Declaração de Variáveis
    float n1, n2;
    
    printf("Insira o primeiro número: \n");
    scanf("%f", &n1);
    printf("Insira o segundo número: \n");
    scanf("%f", &n2);
    
    if (n1 > n2) {
        printf("%.2f", n2);
    } else {
        printf("%.2f", n1);
    }
    return 0;
}
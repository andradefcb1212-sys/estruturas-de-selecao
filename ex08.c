#include <stdio.h>

int main(){
    //Declaração de Variáveis
    float n1, n2, n3;
    int p1 = 2, p2 = 3, p3 = 5;
    float media_final = 0;
    
    //Entrada de dados
    printf("Insira a sua nota no trabalho de laboratório: \n");
    scanf("%f", &n1);
    printf("Insira a sua nota na avaliação semestral: \n");
    scanf("%f", &n2);
    printf("Insira a sua nota no exame final: \n");
    scanf("%f", &n3);
    
    //Processamento
    media_final = ((n1 * p1) + (n2 * p2) + (n3 * p3)) / (p1 + p2 + p3);
    
    //Condicionais e Saídas
    if (media_final <= 10 && media_final >= 8){
        printf("Parabéns! A sua média foi igual a %.2f e o seu conceito é A", media_final);
    } else if (media_final < 8 && media_final >= 7) {
        printf("Parabéns! A sua média foi igual a %.2f e o seu conceito é B", media_final);
    } else if (media_final < 7 && media_final >= 6) {
        printf("Parabéns! A sua média foi igual a %.2f e o seu conceito é C", media_final);
    } else if (media_final < 6 && media_final >= 5) { 
        printf("Parabéns! A sua média foi igual a %.2f e o seu conceito é D", media_final);
    } else if (media_final < 5) {
        printf("Parabéns! A sua média foi igual a %.2f e o seu conceito é E", media_final);
    }
    return 0;
}
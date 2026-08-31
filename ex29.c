#include <stdio.h>
#include <windows.h>

int main(){
    SetConsoleCP(65001);
    SetConsoleOutputCP(65001);

    int n1, n2, n3, n4;
    int i = 0;

    printf("Insira o primeiro número: \n");
    scanf("%d", &n1);
    printf("Insira o segundo número: \n");
    scanf("%d", &n2);
    printf("Insira o terceiro número: \n");
    scanf("%d", &n3);
    printf("Insira o quarto número: \n");
    scanf("%d", &n4);

    if(n1 % 2 == 0 && n1 % 3 == 0){
        printf("O número %d é divisível por 2 e por 3.\n", n1);
    }else if(n1 % 2 == 0){
        printf("O número %d é divisível por 2.\n", n1);
    } else if (n1 % 3 == 0) {
        printf("O número %d é divisível por 3.\n", n1);
    } else {
        printf("O número %d não é divisível por 2 e por 3.\n");
    }

    if(n2 % 2 == 0 && n2 % 3 == 0){
        printf("O número %d é divisível por 2 e por 3.\n", n2);
    }else if(n2 % 2 == 0){
        printf("O número %d é divisível por 2.\n", n2);
    } else if (n2 % 3 == 0) {
        printf("O número %d é divisível por 3.\n", n2);
    } else {
        printf("O número %d não é divisível por 2 e por 3.\n");
    }

    if(n3 % 2 == 0 && n3 % 3 == 0){
        printf("O número %d é divisível por 2 e por 3.\n", n3);
    }else if(n3 % 2 == 0){
        printf("O número %d é divisível por 2.\n", n3);
    } else if (n3 % 3 == 0) {
        printf("O número %d é divisível por 3.\n", n3);
    } else {
        printf("O número %d não é divisível por 2 e por 3.\n");
    }

    if(n4 % 2 == 0 && n4 % 3 == 0){
        printf("O número %d é divisível por 2 e por 3.\n", n4);
    }else if(n4 % 2 == 0){
        printf("O número %d é divisível por 2.\n", n4);
    } else if (n4 % 3 == 0) {
        printf("O número %d é divisível por 3.\n", n4);
    } else {
        printf("O número %d não é divisível por 2 e por 3.\n");
    }
    return 0;
}
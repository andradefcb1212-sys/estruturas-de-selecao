#include <stdio.h>
#include <windows.h>
#include <string.h>

int main(){
    SetConsoleOutputCP(65001);
    SetConsoleCP(65001);

    int idade;
    char grupo[2];

    printf("Insira a sua idade: \n");
    scanf("%d", &idade);
    printf("Insira o seu grupo de risco (b - baixo, m- médio, a - alto): \n");
    scanf("%s", grupo);

    if (idade >= 18 && idade <= 24){
        if (strcmp(grupo, "b") == 0) {
            printf("O seu código do seguro é: 7");
        } else if (strcmp(grupo, "m") == 0) {
            printf("O seu código do seguro é: 8");
        } else if (strcmp(grupo, "a") == 0) {
            printf("O seu código do seguro é: 9");
        } else {
            printf("Insira um grupo válido!");
        }
    } else if(idade >= 25 && idade <= 40) {
        if (strcmp(grupo, "b") == 0) {
            printf("O seu código do seguro é: 4");
        } else if (strcmp(grupo, "m") == 0) {
            printf("O seu código do seguro é: 5");
        } else if (strcmp(grupo, "a") == 0) {
            printf("O seu código do seguro é: 6");
        } else {
            printf("Insira um grupo válido!");
        }
    } else if (idade >= 41 && idade <= 70) {
        if (strcmp(grupo, "b") == 0) {
            printf("O seu código do seguro é: 1");
        } else if (strcmp(grupo, "m") == 0) {
            printf("O seu código do seguro é: 2");
        } else if (strcmp(grupo, "a") == 0) {
            printf("O seu código do seguro é: 3");
        } else {
            printf("Insira um grupo válido!");
        }
    } else {
        printf("Você deve ter entre 18 e 70 anos para ter direito ao seguro!\n");
    }
    return 0;
}
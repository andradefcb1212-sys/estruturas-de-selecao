#include <stdio.h>
#include <windows.h>

int main(){
    int n1, n2, n3;
    
    //Entrada de dados
    printf("Insira três números: ");
    scanf("%d %d %d\n", &n1, &n2, &n3);

    printf("-------------------\n");

    //Condicionais + Processamento e Saída de dados
    if (n1 > n2 && n1 > n3){
        if (n2 > n3){
            printf("%d %d %d", n1, n2, n3);
        } else {
            printf("%d %d %d", n1, n3, n2);
        }
    } else if (n2 > n1 && n2 > n3) {
        if (n1 > n3) {
            printf("%d %d %d", n2, n1, n3);
        } else {
            printf("%d %d %d", n2, n3, n1);
        }
    } else if (n3 > n2 && n3 > n1) {
        if (n2 > n1) {
            printf("%d %d %d", n3, n2, n1);
        } else {
            printf("%d %d %d", n3, n1, n2);
        }
    }
    return 0;
}
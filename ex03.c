#include <stdio.h>
#include <string.h>

int main(){
    //Declaração de Variáveis
    char senha[20];
    
    //Entrada de dados
    printf("Insira a sua senha: \n");
    scanf("%s", &senha);
     
    //Processamento com cálculo condicional e saídas 
    if (strcmp(senha, "ASDFG") == 0) {
        printf("Acesso Liberado!\n");
    } else {
        printf("Acesso Negado! Insira a senha corretamente.");
    }
    return 0;
}
#include <stdio.h>
#include <string.h>
#include <windows.h>

int main(){
    //Correção de Caracteres Especiais
    SetConsoleCP(65001);
    SetConsoleOutputCP(65001);

    //Declaração da variável
    char frase[1000];
    int contador = 0;
    int naPalavra = 0;

    //Entrada de dados
    printf("Insira a frase desejada: \n");
    scanf("%499[^\n]", frase); //lê até encontrar um '\n'.

    //condicional para cada palavra
    for(int i = 0; frase[i] != '\0'; i++){
        if (frase[i] != ' ' && frase[i] != '\t'){
            if (naPalavra == 0) {
                contador++;
                naPalavra = 1;
            }
        } else {
            naPalavra = 0;
        }
    }

    printf("Número de palavras: %d", contador);

    return 0;
}
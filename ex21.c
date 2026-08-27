#include <stdio.h>
#include <string.h>
#include <windows.h>

int main(){
    //Caracteres especiais no Windows
    SetConsoleCP(65001);
    SetConsoleOutputCP(65001);

    //Declaração de Variáveis
    char frase[100];
    int vogal = 0;
    int i;

    //Entrada de dados
    printf("Insira a frase desejada: \n");
    scanf(" %[^\n]", frase); //Ignora os espaços iniciais e lê todos os caracteres exceto as quebras de linha.

    //For
    for (i = 0; frase[i] != '\0'; i++){ // '\0' --> valor "Fantasma" que a string gera no ultimo caractere depois do fim da string.
        char c = frase[i];
        
        //Condicional
        if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u' ||
            c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U'){
            vogal += 1;
        }
    }

    //Saída de dados
    printf("Número de vogais: %d\n", vogal);

    return 0;
}
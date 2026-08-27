#include <stdio.h>
#include <windows.h>

int main(){

    //Correção de caracteres especiais
    SetConsoleCP(65001);
    SetConsoleOutputCP(65001);

    //Declaração
    char frase[500];
    char palavraAtual[100];
    int contador = 0;
    int x = 0;

    //Entrada
    printf("Insira a frase desejada: \n");
    scanf("%499[^\n]", frase);

    //Condicional para a palavra aula
    for(int i=0; frase[i] != '\0'; i++){
        if(frase[i] != ' ' && frase[i] != '\t'){
            if(x < 99){
                palavraAtual[x] = frase[i];
                x++;
            }
        } else {
            if(x > 0){
                palavraAtual[x] = '\0';
                int igual = 1;
                char alvo[] = "aula";
                for(int a = 0; a <= x; a++){
                    if(palavraAtual[a] != alvo[a]){
                        igual = 0;
                        break;
                    }
                }
                if(igual) contador++;
                x = 0;
            }
        }
    }
    if(x > 0){
        palavraAtual[x] = '\0';
        int igual = 1;
        char alvo[] = "aula";
        for(int a = 0; a <= x; a++){
            if(palavraAtual[a] != alvo[a]){
                igual = 0;
                break;
            }
        }
        if (igual) contador++;
    }


    printf("Número de vezes que a palavra aula apareceu: %d", contador);

    return 0;
}
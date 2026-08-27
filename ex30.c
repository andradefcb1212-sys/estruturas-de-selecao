#include <stdio.h>
#include <windows.h>

int main(){
    //Comando para leitura dos caracteres especiais
    SetConsoleCP(65001);
    SetConsoleOutputCP(65001);

    //Declaração das variáveis
    int r1, r2, r3, r4;

    //Entrada de dados (1)
    printf("É MAMÍFERO?\n");
    printf("1 - Sim\n2 - Não\n");
    scanf("%d", &r1);

    //Condicional Mamífero == True
    if (r1 == 1) {
        printf("É QUADRÚPEDE?\n");
        printf("1 - Sim\n2 - Não\n");
        scanf("%d", &r2);

        //Condicional Quadrúpede == True
        if (r2 == 1) {
            printf("É CARNÍVORO?\n");
            printf("1 - Sim\n2 - Não\n");
            scanf("%d", &r3);

            //Condicional Carnívoro == True
            if (r3 == 1) {
                printf("O animal escolhido foi o LEÃO!\n");
            //Caso Carnívoro == False --> Cavalo
            } else if (r3 == 2) {
                printf("O animal escolhido foi o CAVALO!\n");
            } else {
                printf("Opção inválida!\n");
            }
        //Condição Mamífero == False
        } else if (r2 == 2) {
            printf("É BÍPEDE?\n");
            printf("1 - Sim\n2 - Não\n");
            scanf("%d", &r3);
            
            //Condição Bípede == True
            if (r3 == 1) {
                printf("É ONÍVORO?\n");
                printf("1 - Sim\n2 - Não\n");
                scanf("%d", &r4);

                //Condição Onívoro == True
                if (r4 == 1) {
                    printf("O animal escolhido foi o HOMEM!\n");
                } else if (r4 == 2) {
                    //Condição Onívoro == False
                    printf("O animal escolhido foi o MACACO!\n");
                } else {
                    printf("Opção inválida!\n");
                }
            
            //Condição Caso Quadrúpede e Bípede == False
            } else if (r3 == 2) {
                printf("É VOADOR?\n");
                printf("1 - Sim\n2 - Não\n");
                scanf("%d", &r4);

                //Condição Voador == True
                if (r4 == 1) {
                    printf("O animal escolhido foi o MORCEGO!\n");
                } else if (r4 == 2) {
                    //Condição Voador == False --> Aquáticos == True
                    printf("O animal escolhido foi a BALEIA!\n");
                } else {
                    printf("Opção inválida!\n");
                }
            } else {
                printf("Opção inválida!\n");
            }
        } else {
            printf("Opção inválida!\n");
        }

    //Condição Mamífero == False
    } else if (r1 == 2) {
        printf("É AVE?\n");
        printf("1 - Sim\n2 - Não\n");
        scanf("%d", &r2);

        //Condição Ave == True
        if (r2 == 1) {
            printf("É NÃO-VOADORA?\n");
            printf("1 - Sim\n2 - Não\n");
            scanf("%d", &r3);

            //Condição Não-Voadora == True
            if (r3 == 1) {
                printf("É DE CLIMA TROPICAL?\n");
                printf("1 - Sim\n2 - Não (Polar)\n");
                scanf("%d", &r4);

                //Condição Clima Tropical == True
                if (r4 == 1) {
                    printf("O animal escolhido foi o AVESTRUZ!\n");
                } else if (r4 == 2) {
                    //Condição Clima Tropical == False
                    printf("O animal escolhido foi o PINGUIM!\n");
                } else {
                    printf("Opção inválida!\n");
                }
            
                //Condição Não-Voadora == False
            } else if (r3 == 2) {
                printf("É NADADORA?\n");
                printf("1 - Sim\n2 - Não\n");
                scanf("%d", &r4);
                
                //Condição Nadadora == True
                if (r4 == 1) {
                    printf("O animal escolhido foi o PATO!\n");
                } else if (r4 == 2) {
                    //Condição Nadadora == False --> De Rapina == True
                    printf("O animal escolhido foi a ÁGUIA!\n");
                } else {
                    printf("Opção inválida!\n");
                }
            } else {
                printf("Opção inválida!\n");
            }

        //Condição Mamíferos e Aves == False
        } else if (r2 == 2) {
            printf("TEM CASCO?\n");
            printf("1 - Sim\n2 - Não\n");
            scanf("%d", &r3);

            //Condição Casco == True
            if (r3 == 1) {
                printf("O animal escolhido foi a TARTARUGA!\n");
                //Condição Casco == False --> Carnívoro == True
            } else if (r3 == 2) {
                printf("É CARNÍVORO?\n");
                printf("1 - Sim\n2 - Não\n");
                scanf("%d", &r4);

                //Condição Carnívoro == True
                if (r4 == 1) {
                    printf("O animal escolhido foi o CROCODILO!\n");
                } else if (r4 == 2) {
                    //Condição Carnívoro == False --> Sem Patas == True
                    printf("O animal escolhido foi a COBRA!\n");
                } else {
                    printf("Opção inválida!\n");
                }
            } else {
                printf("Opção inválida!\n");
            }
        } else {
            printf("Opção inválida!\n");
        }

    } else {
        printf("Opção inválida!\n");
    }

    return 0;
}
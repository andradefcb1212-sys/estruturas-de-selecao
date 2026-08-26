#include <stdio.h>
#include <windows.h>

int main(){
    SetConsoleCP(65001);
    SetConsoleOutputCP(65001);

    int r1, r2, r3, r4;

    printf("É MAMÍFERO?\n");
    printf("1 - Sim\n2 - Não\n");
    scanf("%d", &r1);

    if (r1 == 1) {
        printf("É QUADRÚPEDE?\n");
        printf("1 - Sim\n2 - Não\n");
        scanf("%d", &r2);

        if (r2 == 1) {
            printf("É CARNÍVORO?\n");
            printf("1 - Sim\n2 - Não\n");
            scanf("%d", &r3);

            if (r3 == 1) {
                printf("O animal escolhido foi o LEÃO!\n");
            } else if (r3 == 2) {
                printf("O animal escolhido foi o CAVALO!\n");
            } else {
                printf("Opção inválida!\n");
            }
        } else if (r2 == 2) {
            printf("É BÍPEDE?\n");
            printf("1 - Sim\n2 - Não\n");
            scanf("%d", &r3);

            if (r3 == 1) {
                printf("É ONÍVORO?\n");
                printf("1 - Sim\n2 - Não\n");
                scanf("%d", &r4);

                if (r4 == 1) {
                    printf("O animal escolhido foi o HOMEM!\n");
                } else if (r4 == 2) {
                    printf("O animal escolhido foi o MACACO!\n");
                } else {
                    printf("Opção inválida!\n");
                }
            } else if (r3 == 2) {
                printf("É VOADOR?\n");
                printf("1 - Sim\n2 - Não\n");
                scanf("%d", &r4);

                if (r4 == 1) {
                    printf("O animal escolhido foi o MORCEGO!\n");
                } else if (r4 == 2) {
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

    } else if (r1 == 2) {
        printf("É AVE?\n");
        printf("1 - Sim\n2 - Não\n");
        scanf("%d", &r2);

        if (r2 == 1) {
            printf("É NÃO-VOADORA?\n");
            printf("1 - Sim\n2 - Não\n");
            scanf("%d", &r3);

            if (r3 == 1) {
                printf("É DE CLIMA TROPICAL?\n");
                printf("1 - Sim\n2 - Não (Polar)\n");
                scanf("%d", &r4);

                if (r4 == 1) {
                    printf("O animal escolhido foi o AVESTRUZ!\n");
                } else if (r4 == 2) {
                    printf("O animal escolhido foi o PINGUIM!\n");
                } else {
                    printf("Opção inválida!\n");
                }
            } else if (r3 == 2) {
                printf("É NADADORA?\n");
                printf("1 - Sim\n2 - Não\n");
                scanf("%d", &r4);

                if (r4 == 1) {
                    printf("O animal escolhido foi o PATO!\n");
                } else if (r4 == 2) {
                    printf("O animal escolhido foi a ÁGUIA!\n");
                } else {
                    printf("Opção inválida!\n");
                }
            } else {
                printf("Opção inválida!\n");
            }

        } else if (r2 == 2) {
            printf("TEM CASCO?\n");
            printf("1 - Sim\n2 - Não\n");
            scanf("%d", &r3);

            if (r3 == 1) {
                printf("O animal escolhido foi a TARTARUGA!\n");
            } else if (r3 == 2) {
                printf("É CARNÍVORO?\n");
                printf("1 - Sim\n2 - Não\n");
                scanf("%d", &r4);

                if (r4 == 1) {
                    printf("O animal escolhido foi o CROCODILO!\n");
                } else if (r4 == 2) {
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
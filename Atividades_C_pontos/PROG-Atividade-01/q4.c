// Samuel Gustavo Lima da Silva
// Maria de Fátima Almeida Linhares de Oliveira

#include <stdio.h>

int main(void) {

    int dia, mes, ano;

    printf("--> Teste Data Válida <--\n\n");

    printf("Informe um dia: ");
    scanf("%i", &dia);

    printf("\nInforme um mês ex(08): ");
    scanf("%i", &mes);

    printf("\nInforme um ano: ");
    scanf("%i", &ano);

    if(ano >= 1) {
        if(mes >= 1 && mes <= 12) {
            if(mes <= 7) {
                if((mes % 2 == 1) && (dia >= 1 && dia <= 31)) {
                    printf("\nFormato de data valida! (%i/%i/%i)", dia, mes, ano);
                } else if((mes % 2 == 0) && (dia >= 1 && dia <= 30)) {
                    if(mes != 2) {
                        printf("\nFormato de data valida! (%i/%i/%i)", dia, mes, ano);
                    } else if(mes == 2) {
                        if((dia >= 1 && dia <= 28)) {
                            printf("\nFormato de data valida! (%i/%i/%i)", dia, mes, ano);
                        } else if((dia == 29) && (ano % 4 == 0 && ano % 100 != 0) || (ano % 400 == 0)) {
                            printf("\nFormato de data valida! (%i/%i/%i)", dia, mes, ano);
                        } else {
                            printf("\nFormato de data inválido! (%i/%i/%i)", dia, mes, ano);
                        }
                    }
                } else {
                    printf("\nFormato de data inválido! (%i/%i/%i)", dia, mes, ano);
                }
            } else if(mes > 7) {
                if((mes % 2 == 1) && (dia >= 1 && dia <= 30)) {
                    printf("\nFormato de data valida! (%i/%i/%i)", dia, mes, ano);
                } else if((mes % 2 == 0) && (dia >= 1 && (dia <= 31))) {
                    printf("\nFormato de data valida! (%i/%i/%i)", dia, mes, ano);
                } else {
                    printf("\nFormato de data inválido! (%i/%i/%i)", dia, mes, ano);
                }
            }
        } else {
            printf("\nFormato de data inválido! (%i/%i/%i)", dia, mes, ano);
        }
    } else {
        printf("\nFormato de data inválido! (%i/%i/%i)", dia, mes, ano);
    }

    printf("\n");

    return 0;
}
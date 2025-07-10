#include <stdio.h>

int main(void) {

    int ano;

    printf("Informe o ano: ");
    scanf("%i", &ano);

    // if(ano > 0) {
    //     if((ano % 4 == 0 || ano % 400 == 0) && ano % 100 != 0) {
    //         printf("O ano %i é bissexto\n", ano);
    //     } else {
    //         printf("O ano %i não é bissexto\n", ano);
    //     }
    // } else {
    //     printf("O ano informado é negativo!\n");
    // }

    // if(ano > 0) {
    //     if(ano % 4 == 0 && (ano % 400 == 0 || ano % 100 != 0)) {
    //         printf("O ano %i é bissexto\n", ano);
    //     } else {
    //         printf("O ano %i não é bissexto\n", ano);
    //     }
    // } else {
    //     printf("O ano informado é negativo!\n");
    // }

    if(ano > 0) {
        if(ano % 4 == 0 && ano % 100 != 0 || ano % 400 == 0) {
            printf("O ano %i é bissexto\n", ano);
        } else {
            printf("O ano %i não é bissexto\n", ano);
        }
    } else {
        printf("O ano informado é negativo!\n");
    }
    
    return 0;
}
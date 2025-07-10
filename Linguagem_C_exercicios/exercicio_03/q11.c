#include <stdio.h>

int main(void) {

    double emprestimo, divida;
    int contador_meses = 0;

    printf("Informe o valor de emprestimo da empresa: ");
    scanf("%lf", &emprestimo);

    divida = emprestimo;

    while (divida > 0) {
        divida -= emprestimo * 0.10;
        if(contador_meses < 12) {
            divida += divida * 0.035;
        } else {
            divida += divida * 0.042;
        }
        contador_meses++;

        if (divida < 0){
            divida = 0;
        }
    }

    printf("\nQuantidade de meses: %i\n", contador_meses);
    return 0;
}
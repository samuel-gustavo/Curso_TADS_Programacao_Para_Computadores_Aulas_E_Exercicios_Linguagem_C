#include <stdio.h>

int main(void) {

    float nota1 = -1, nota2 = -1, nota3 = -1, nota, media_aritmetica;
    int contador = 1;

    do
    {
        printf("Informe a %iº nota: ", contador);
        scanf("%f", &nota);

        if(nota >= 0 && nota <= 100) {
            if(nota1 == -1) {
                nota1 = nota;
            } else if(nota2 == -1) {
                nota2 = nota;
            } else if(nota3 == -1) {
                nota3 = nota;
            }
            contador++;
        } else {
            printf("\nInforme valores entre 0 e 100\n\n");
        }
    } while (contador != 4);
        
    media_aritmetica = (nota1 + nota2 + nota3) / 3;

    printf("\nEssa é sua média aritmética: %.2f\n", media_aritmetica);

    return 0;
}
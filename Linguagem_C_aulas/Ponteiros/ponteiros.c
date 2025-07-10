#include <stdio.h>

int main(void) {

    float numero = 2.5;
    float * ponteiroFloat;
    void * ptrVoid;

    ponteiroFloat = &numero;

    printf("Conteúdo de número: %.2f\n", numero);
    printf("Endereço de número: %p\n", &numero);
    printf("Endereço de ponteiroFloat: %p\n", &ponteiroFloat);
    printf("Conteúdo de ponteiroFloat: %p\n", ponteiroFloat);
    printf("Conteúdo de número via ponteiro: %.2f", *ponteiroFloat);


    *ponteiroFloat = numero * 10;

    printf("Conteúdo de número: %.2f\n", numero);
    printf("Endereço de número via ponteiro: %.2f\n", *ponteiroFloat);


    // printf("Resultado: ");

    return 0;
}
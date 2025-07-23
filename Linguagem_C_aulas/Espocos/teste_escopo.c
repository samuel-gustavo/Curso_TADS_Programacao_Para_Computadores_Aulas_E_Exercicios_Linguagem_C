#include <stdio.h>

int var_global = 25;

void exibir(int numero) {
    printf("\nNumro(func-par): %i", numero);
    // int numero = 5;
    int n = 5;
    printf("\nNumro(func-desc): %i", n);

    printf("\n-> Var_Global(func): %i", var_global);
}

void teste_static() {
    static int cont = 0; // Nunca deixa de existir

    printf("\nCont: %i", cont);

    cont++;
}


int main(void) {
    int numero = 10; // Local
    char caractere = 'A'; // Local
    int * intptn = &numero;

    printf("\n-> Número(main): %i", numero);
    printf("\n-> Var_Global(main): %i", var_global);

    int var_global = 55;
    printf("\n-> Var_Global(main): %i", var_global);

    if (numero % 2 == 0) {
        int numero1 = 67;
        int numero = 15;
        caractere = 'P';
        printf("\n-> Número(if): %i\n", numero);
        printf("-> Número ponteiro(if): %i\n", *intptn);
    }

    // numero1 = 87; Fora do escopo

    printf("\n-> Número(main): %i\n", numero);

    // Chamada da função
    exibir(numero);

    // printf("\nNumro(func-desc): %i", n);

    printf("\n\n TESTE STATIC");
    for (int i = 0; i < 10; i++) {
        teste_static();
    }

    
    return 0;
}
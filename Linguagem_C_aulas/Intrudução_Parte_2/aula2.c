#include <stdio.h>

int main(void) {

    // int num1, num2;

    // printf("Informe o primeiro número: ");
    // scanf("%i", &num1);

    // printf("Informe o segundo número: ");
    // scanf("%i", &num2);

    // printf("Resultado: %i\n", num1 + num2);

    int x = 10;

    int *prt =  &x;

    printf("%p\n", &x);
    printf("%i\n", *prt);
    return 0;
}
#include <stdio.h>

void swap(float * var1, float * var2);

int main(void) {
    float n1 = 5, n2 = 10;

    printf(" Antes da troca: n1 = %.2f, n2 = %.2f\n", n1, n2);
    swap(&n1, &n2);

    printf(" Antes da troca: n1 = %.2f, n2 = %.2f\n", n1, n2);


    return 0;
}

void swap(float * var1, float * var2) {
    float aux;

    aux = *var1;
    *var1 = *var2;
    *var2 = aux;
}
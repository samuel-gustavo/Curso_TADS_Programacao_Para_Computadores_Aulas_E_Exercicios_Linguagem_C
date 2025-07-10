#include <stdio.h>
#include <math.h>

int main(void) {

    float a, b, c, x1, x2;

    printf("Informe o valor de (a): ");
    scanf("%f", &a);

    printf("\nInforme o valor de (b): ");
    scanf("%f", &b);

    printf("\nInforme o valor de (c): ");
    scanf("%f", &c);

    float delta = pow(b, 2) + (-4 * a * c);

    if(delta < 0) {
        printf("\nO valor de delta foi negativo!");
        printf("\nPrograma finalizado!\n");
    } else {
        printf("\nO valor de delta foi: %f", delta);
        x1 = (-b + sqrt(delta)) / (2 * a);
        x2 = (-b - sqrt(delta)) / (2 * a);
        printf("\nO valor de X1 = %f", x1);
        printf("\nO valor de X2 = %f\n", x2);
    }


    return 0;
}
#include <stdio.h>

int comparar_valor(float n1, float n2);
// float comparar_valor(float n1);

int main(void) {

    float num1, num2;

    printf("Informe os dois valores para o teste: ");
    scanf("%f %f", &num1, &num2);

    int resultado = comparar_valor(num1, num2);

    switch (resultado) {
    case 1:
        printf("%.1f > %.1f\n", num1, num2);
        break;
    case 0:
        printf("%.1f == %.1f\n", num1, num2);
        break;
    case -1:
        printf("%.1f < %.1f\n", num1, num2);
        break;
    }

    return 0;
}

int comparar_valor(float n1, float n2) {
    if(n1 > n2) {
        return 1;
    } else if(n1 < n2) {
        return -1;
    } else {
        return 0;
    }
}
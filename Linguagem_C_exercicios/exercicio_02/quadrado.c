#include <stdio.h>
#include <math.h>

int main(void) {

    float valor, resultado;

    printf("Digite um número para elevar ao quadrado: ");
    scanf("%f", &valor);

    if (valor > 0)
    {
        resultado = sqrt(valor);
        printf("--> Valor da raiz do número positivo: %.1f\n", resultado);
    } else {
        resultado = pow(valor, 2);
        printf("--> Valor da potência do número negativo: %.1f\n", resultado);
    }
    
    return 0;
}
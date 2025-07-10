#include <stdio.h>
#include <math.h>

int main(void) {

    int n;

    printf("Informe o valor de N: ");
    scanf("%i", &n);

    printf("Resultado: ");
    for (int i = 1; i <= n; i++)
    {
        printf("%i ", (int) pow(i, 2));
    }

    printf("\n");
    return 0;
}
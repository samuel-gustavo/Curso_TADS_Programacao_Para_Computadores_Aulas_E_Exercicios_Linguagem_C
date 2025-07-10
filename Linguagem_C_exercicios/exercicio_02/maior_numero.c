#include <stdio.h>

int main(void) {

    int num1, num2, num3;

    printf("Informe o 1º número: ");
    scanf("%i", &num1);

    printf("\nInforme o 2º número: ");
    scanf("%i", &num2);

    printf("\nInforme o 3º número: ");
    scanf("%i", &num3);

    if(num1 > num2 && num1 > num3) {
        printf("%i é maior\n", num1);
    } else if (num2 > num1 && num2 > num3)
    {
        printf("%i é maior\n", num2);
    } else 
    {
        printf("%i é maior\n", num3);
    }
    
    return 0;
}
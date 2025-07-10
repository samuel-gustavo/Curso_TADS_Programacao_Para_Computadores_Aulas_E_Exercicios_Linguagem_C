#include <stdio.h>

int main(void) {

    float altura_manoel = 1.50, altura_josue = 1.10;
    int contador_anos = 0;

    while (altura_manoel >= altura_josue) {
        altura_manoel += 0.02;
        altura_josue += 0.03;
        contador_anos++;
    }

    printf("\nSerão necessários %i anos\n", contador_anos);
    return 0;
}
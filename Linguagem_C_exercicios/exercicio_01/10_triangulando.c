#include <stdio.h>
#include <math.h>

int main(void) {

    float area, perimetro, s, s1, s2, s3;

    printf("Informe o lado S1: ");
    scanf("%f", &s1);

    printf("\nInforme o lado S2: ");
    scanf("%f", &s2);

    printf("\nInforme o lado S3: ");
    scanf("%f", &s3);

    s = (s1 + s2 + s3) / 2;

    area = sqrt(s * (s - s1) * (s - s2) * (s - s3));

    perimetro = s1 + s2 + s3;

    printf("\nPerímetro do Triângulo: %.2fm²", perimetro);
    printf("\nÁrea do Triângulo: %.2fm²\n", area);

    return 0;
}
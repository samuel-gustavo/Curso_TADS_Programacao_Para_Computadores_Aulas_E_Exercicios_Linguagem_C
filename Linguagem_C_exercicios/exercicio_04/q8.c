#include <stdio.h>

int combinatoria(int n, int p);
int fatorial(int n);
int fat(int n);

int main(void) {

    // printf(" 1! = %i\n", fatorial(1));
    // printf(" 0! = %i\n", fatorial(0));
    // printf(" 4! = %i\n", fatorial(4));

    // printf("%i", fat(5));

    printf("C_4,2 = %i\n", combinatoria(4, 2));
    printf("C_6,2 = %i\n", combinatoria(6, 2));
    printf("C_8,3 = %i\n", combinatoria(8, 3));


    return 0;
}

int combinatoria(int n, int p) {
    int c;

    c = fat(n) / (fat(p) * fat(n - p));

    return c;
}

int fatorial(int n) {
    int f = 1;

    for (int i = n; i > 1; i--) {
        f = i * f;
    }

    return f;
}

int fat(int n) {
    if(n <= 1) {
        return 1;
    } else {
        return n * fatorial(n - 1);
    }
    // return n * fat(n - 1);
}
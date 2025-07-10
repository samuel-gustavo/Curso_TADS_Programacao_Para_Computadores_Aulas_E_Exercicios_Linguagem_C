#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define NCJ01 10
#define NCJ02 20

int main(void) {

    int conjunto01[NCJ01], conjunto02[NCJ02];

    // srand(time(NULL));
    srand(123);

    printf("Conjunto 1: ");
    for (int i = 0; i < NCJ01; i++)
    {
        conjunto01[i] = rand() % 21;
        printf("%i ", conjunto01[i]);
    }

    printf("\n");

    printf("Conjunto 2: ");
    for (size_t i = 0; i < NCJ02; i++)
    {
        conjunto02[i] = rand() % 21;
        printf("%i ", conjunto02[i]);
    }

    printf("\n");

    printf("Números iguais: ");
    for (int i = 0; i < NCJ01; i++)
    {
        for (int j = 0; j < NCJ02; j++)
        {
            if (conjunto01[i] == conjunto02[j])
            {
                printf("%i ", conjunto01[i]);
                break;
            }
        }   
    }
    
    printf("\n");

    return 0;
}
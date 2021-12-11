#include <stdio.h>
#include <stdlib.h>

void main(){
    int x = 3;
    float y = 3.4;
    char z = 'A';

    int *ponteirox = NULL;
    float *ponteiroy = NULL;
    char *ponteiroz = NULL;

    ponteirox = &x;
    ponteiroy = &y;
    ponteiroz = &z;

    printf("Antes:\n");
    printf("x = %d \n", x);
    printf("y = %f \n", y);
    printf("z = %c \n", z);

    printf("\nDigite um novo valor de x: ");
    scanf("%i", &(*ponteirox));
    printf("Digite um novo valor de y: ");
    scanf("%f", &(*ponteiroy));
    printf("Digite um novo valor de z: ");
    getchar();
    scanf("%c", &(*ponteiroz));

    printf("\nDepois:\n");
    printf("x = %d \n", x);
    printf("y = %f \n", y);
    printf("z = %c \n", z);
}

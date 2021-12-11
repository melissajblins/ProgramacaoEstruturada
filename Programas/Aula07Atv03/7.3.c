#include <stdio.h>
#include <stdlib.h>

void main(){
    int x, y;

    printf("Digite o valor de x: ");
    scanf("%d", &x);
    printf("Digite o valor de y: ");
    scanf("%d", &y);

    troca(&x, &y);
    printf("%d \n", x);
    printf("%d", y);
}

void troca(int *ponteirox, int *ponteiroy){
    int auxiliar;
    auxiliar = *ponteirox;
    *ponteirox = *ponteiroy;
    *ponteiroy = auxiliar;
}

#include <stdio.h>
#include <stdlib.h>

void main(){
    int inteirox, inteiroy;

    printf("Digite o valor de x: ");
    scanf("%d", &inteirox);
    printf("Digite o valor de y: ");
    scanf("%d", &inteiroy);

    soma(&inteirox, &inteiroy);
    printf("%d\n", inteirox);
    printf("%d", inteiroy);
}

void soma(int *ponteirox, int *ponteiroy){
    int somador;
    somador = *ponteirox + *ponteiroy;
    *ponteirox = somador;
}

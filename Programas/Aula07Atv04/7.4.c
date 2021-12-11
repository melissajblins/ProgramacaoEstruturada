#include <stdio.h>
#include <stdlib.h>

void main(){
    int inteirox, inteiroy;

    printf("Digite o valor de x: ");
    scanf("%d", &inteirox);
    printf("Digite o valor de y: ");
    scanf("%d", &inteiroy);

    maiormenor(&inteirox, &inteiroy);

    printf("%d\n", inteirox);
    printf("%d", inteiroy);
}

int maiormenor(int *ponteirox, int *ponteiroy){
    int auxiliar;
    if (*ponteirox > *ponteiroy || *ponteirox == *ponteiroy){
       return 0;
    } else{
        auxiliar = *ponteirox;
        *ponteirox = *ponteiroy;
        *ponteiroy = auxiliar;
    }
}

#include <stdio.h>
#include <stdlib.h>

void main(){
    int numero, antecessor, sucessor;
    printf("Digite um numero: ");
    scanf("%d", &numero);

    antecessor = numero -1;
    sucessor = numero + 1;

    printf("Antecessor de %d eh: %d \n", numero, antecessor);
    printf("Sucessor de %d eh: %d \n", numero, sucessor);
}

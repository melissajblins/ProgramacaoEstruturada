#include <stdio.h>
#include <stdlib.h>

void main(){
    int numero;

    printf("Digite um numero: ");
    scanf("%d", &numero);

    if (numero < 1 || numero > 7){
        printf("Numero Invalido! \n");
    }

    switch(numero){
        case 1:
            printf("Domingo!");
            break;
        case 2:
            printf("Segunda!");
            break;
        case 3:
            printf("Terça!");
            break;
        case 4:
            printf("Quarta!");
            break;
        case 5:
            printf("Quinta!");
            break;
        case 6:
            printf("Sexta!");
            break;
        case 7:
            printf("Sabado!");
            break;
    }

}

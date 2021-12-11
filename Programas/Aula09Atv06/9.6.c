#include <stdio.h>
#include <stdlib.h>

int* valores(int);

void main(){
    int valor;
    int *ponteiroprincipal = NULL;

    printf("Digite um numero: ");
    scanf("%d", &valor);

    ponteiroprincipal = valores(valor);

    if (ponteiroprincipal == NULL){
        printf("Ponteiro NULL.");
    } else {
        printf("Ponteiro NAO NULL.");
    }
}

int* valores(int valorfuncao){
    int *ponteirofuncao = NULL;

    if (valorfuncao == 0){
        valorfuncao = -2;
    }

    ponteirofuncao = (int*) malloc(valorfuncao*sizeof(int));

    if (ponteirofuncao == NULL){
        printf("Ponteiro NULL.");
        exit(1);
    }

    if (ponteirofuncao < 1 ) {
        ponteirofuncao = NULL;
    }

    return ponteirofuncao;
}

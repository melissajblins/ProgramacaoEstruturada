#include <stdio.h>
#include <stdlib.h>

int* imprimindovetores(int, int);

void main(){
    int *ponteiroprincipal = NULL;
    int numero1, numero2;

    printf("Digite o primeiro numero: ");
    scanf("%d", &numero1);
    printf("Digite o segundo numero: ");
    scanf("%d", &numero2);

    ponteiroprincipal = imprimindovetores(numero1, numero2);

    if (ponteiroprincipal == NULL){
        printf("NULL");
    } else {
        for (int linha = 0; linha < numero1; linha++){
            printf("%d ", *ponteiroprincipal);
        }
    }
}

int* imprimindovetores(int numeroa, int numerob){
    int *ponteirofuncao = NULL;

    if (numerob <= 0){
        return NULL;
    } else {
        ponteirofuncao = (int*) malloc(numeroa*sizeof(int));
        for (int linha = 0; linha < numeroa; linha++){
            ponteirofuncao[linha] = numerob;
        }
    }

    return ponteirofuncao;
}

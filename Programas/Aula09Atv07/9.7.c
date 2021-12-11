#include <stdio.h>
#include <stdlib.h>
#include<string.h>
#include<assert.h>

char* invertendo(char palavrafuncao[]){
    char *ponteirofuncao = NULL;
    int contador = 0;

    ponteirofuncao = (int*) malloc(5*sizeof(char));

    for (int linha = 4; linha >= 0; linha--){
        ponteirofuncao[contador] = palavrafuncao[linha];
        contador++;
        ponteirofuncao[contador] = ' ';
        contador++;
    }

    ponteirofuncao[contador] = '\0';
    return ponteirofuncao;
}

void main(){
    char *ponteiroprincipal = NULL;
    char palavra[6];

    scanf("%s", &palavra);

    ponteiroprincipal = invertendo(palavra);

    printf("%s", ponteiroprincipal);

    free(ponteiroprincipal);
    ponteiroprincipal = NULL;
}


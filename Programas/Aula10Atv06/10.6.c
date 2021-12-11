#include <stdio.h>
#include <stdlib.h>

int* insertionsort(int *vetorfuncao, int tamanhofuncao){
    int linha = 0, coluna = 0, atual = 0;
    for (linha = 0; linha < tamanhofuncao; linha++){
        atual = vetorfuncao[linha];
        coluna = linha;
        while (coluna > 0 && atual < vetorfuncao[coluna-1]){
            vetorfuncao[coluna] = vetorfuncao[coluna-1];
            coluna--;
        }
        vetorfuncao[coluna] = atual;
    }
    return vetorfuncao;
}


void main(){
    int tamanho, linha;

    printf("Digite o tamanho do vetor: ");
    scanf("%d", &tamanho);

    int vetor[tamanho];

    for (linha = 0; linha < tamanho; linha++){
        scanf("%d", &vetor[linha]);
    }

    vetor[tamanho] = insertionsort(vetor, tamanho);

    for (linha = 0; linha < tamanho; linha++){
        printf("%d ", vetor[linha]);
    }
}

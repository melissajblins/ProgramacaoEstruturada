#include <stdio.h>
#include <stdlib.h>

int* selectionsort(int *vetorfuncao, int tamanhovetor){
   int linha = 0, coluna = 0, menor = 0, troca = 0;
    for (linha = 0; linha < tamanhovetor-1; linha++){
        menor = linha;
        for (coluna = linha+1; coluna < tamanhovetor; coluna++){
            if (vetorfuncao[coluna] > vetorfuncao[menor]){
                menor = coluna;
            }
        }
        if (linha != menor){
            troca = vetorfuncao[linha];
            vetorfuncao[linha] = vetorfuncao[menor];
            vetorfuncao[menor] = troca;
        }
    }
    return vetorfuncao;
}


void main(){
    int tamanho, linha;

    printf("Digite o tamanho do vetor: ");
    scanf("%d", &tamanho);

    int vetor[tamanho];

    for (linha = 0; linha < tamanho; linha++){
        printf("Digite um numero: ");
        scanf("%d", &vetor[linha]);
    }

    vetor[tamanho] = selectionsort(vetor, tamanho);

    for (linha = 0; linha < tamanho; linha++){
        printf("%d ", vetor[linha]);
    }
}

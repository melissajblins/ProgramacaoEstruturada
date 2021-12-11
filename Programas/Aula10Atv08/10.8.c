#include <stdio.h>
#include <stdlib.h>
#include <stdio.h>
#include <stdlib.h>

int* bubblesort(int *vetorfuncao, int tamanhovetor){
    int parada, auxiliar;

    do {
        parada = 0;
        for (int linha = 0; linha < tamanhovetor-1; linha++){
            if (vetorfuncao[linha] > vetorfuncao[linha+1]){
                auxiliar = vetorfuncao[linha];
                vetorfuncao[linha] = vetorfuncao[linha+1];
                vetorfuncao[linha+1] = auxiliar;
                parada = 1;
            }
        }
        tamanhovetor--;
    }while(parada != 0);
    return vetorfuncao;
}

void main(){
    int elementoinserido, tamanho, linha, coluna, parada, tamanhoponteiro, contador = 0, *ponteiroprincipal;

    printf("Digite o numero a ser inserido: ");
    scanf("%d", &elementoinserido);

    printf("Digite o tamamho do vetor: ");
    scanf("%d", &tamanho);

    ponteiroprincipal = (int*) malloc(tamanho*sizeof(int));
    if (ponteiroprincipal == NULL){
        printf("Erro!");
        exit(1);
    }

    for (linha = 0; linha < tamanho; linha++){
        scanf("%d", &ponteiroprincipal[linha]);
    }

    ponteiroprincipal = bubblesort(ponteiroprincipal, tamanho);

    tamanhoponteiro = tamanho+1;
    ponteiroprincipal = realloc(ponteiroprincipal, tamanhoponteiro*sizeof(int));

    for (linha = 0; linha < tamanhoponteiro; linha++){
        if(elementoinserido < ponteiroprincipal[linha] && contador == 0){
            parada = linha;
            for(coluna = tamanho; coluna >= parada; coluna--){
                ponteiroprincipal[tamanhoponteiro] = ponteiroprincipal[coluna];
                tamanhoponteiro--;
            }
            ponteiroprincipal[parada] = elementoinserido;
            contador++;
        }
        }

    for (linha = 0; linha < tamanho+1; linha++){
        printf("%d ", ponteiroprincipal[linha]);
    }
}

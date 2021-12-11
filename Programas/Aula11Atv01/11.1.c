#include <stdio.h>
#include <stdlib.h>

void mergeSort(int *vetorfuncao, int inicio, int fim){
    int meio = 0;

    if(inicio < fim){
        meio = (inicio + fim)/2;
        mergeSort(vetorfuncao, inicio, meio);
        mergeSort(vetorfuncao, meio+1, fim);
        merge(vetorfuncao, inicio, meio, fim);
    }

}

void merge(int *vetorfuncao2, int inicio, int meio, int fim){
    int *temp = NULL, p1, p2, tamanho, i, j, k;
    int fim1 = 0, fim2 = 0;

    tamanho = fim - inicio + 1;
    p1 = inicio;
    p2 = meio + 1;
    temp = (int *) malloc(tamanho*sizeof(int));

    if (temp != NULL){
        for (i = 0; i < tamanho; i++){
            if (!fim1 && !fim2){
                if (vetorfuncao2[p1] > vetorfuncao2[p2]){
                    temp[i] = vetorfuncao2[p1++];
                } else{
                    temp[i] = vetorfuncao2[p2++];
                }
                if (p1 > meio){
                    fim1 = 1;
                }
                if (p2 > fim){
                    fim2 = 1;
                }
            }
            else{
                if (!fim1){
                    temp[i] = vetorfuncao2[p1++];
                } else{
                    temp[i] = vetorfuncao2[p2++];
                }
            }
        }

        k = inicio;
        for (j = 0; j < tamanho; j++){
            vetorfuncao2[k] = temp[j];
            k++;
        }
    }
    free(temp);
}

void main(){
    int tamanho, linha;

    scanf("%d", &tamanho);

    int vetor[tamanho];

    for (linha = 0; linha < tamanho; linha++){
        scanf("%d", &vetor[linha]);
    }

    mergeSort(vetor, 0, tamanho);

    for (linha = 0; linha < tamanho; linha++){
        printf("%d", vetor[linha]);
    }
}

#include <stdio.h>
#include <stdlib.h>

void main(){
    int *ponteirovetor, tamanho;

    printf("Digite o tamanho do vetor: ");
    scanf("%d", &tamanho);

    ponteirovetor = (int *) malloc(tamanho*sizeof(int));

    if (ponteirovetor == NULL){
        printf("Erro!\n");
        exit(1);
    }

    for (int linha = 0; linha < tamanho; linha++){
        scanf("%d", &ponteirovetor[linha]);
    }

    for (int linha = 0; linha < tamanho; linha++){
        printf("%d ", ponteirovetor[linha]);
    }

    free(ponteirovetor);
    ponteirovetor = NULL;
}

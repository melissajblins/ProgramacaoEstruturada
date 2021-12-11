#include <stdio.h>
#include <stdlib.h>

void main(){
    int *ponteirovetor = NULL;
    int tamanho, auxiliar;

    do{
        printf("Digite o tamanho do vetor: ");
        scanf("%d", &tamanho);
        if (tamanho < 0){
            printf("Numero deve ser POSITIVO! Digite um numero VALIDO!!\n");
        }
    } while(tamanho < 0);

    ponteirovetor = (int *) malloc (tamanho*sizeof(int));

    if (ponteirovetor == NULL){
        printf("Erro!");
        exit(1);
    }

    for (int linha = 0; linha < tamanho; linha++){
        do {
        printf("Digite um numero: ");
        scanf("%d", &auxiliar);

        if (auxiliar < 2){
            printf("Digite um numero >=2!\n");
        }

        }while (auxiliar < 2);

        ponteirovetor[linha] = auxiliar;
    }

    for (int linha = 0; linha < tamanho; linha++){
        printf("%d ", ponteirovetor[linha]);
    }

    free(ponteirovetor);
    ponteirovetor = NULL;
}

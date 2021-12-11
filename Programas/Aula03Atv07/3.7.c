#include <stdio.h>
#include <stdlib.h>

void main(){
    int quantidadelinhas = 6, contador = 0;

    printf("Digite a quantidade de linhas: ");
    scanf("%d", &quantidadelinhas);

    for (int linha = 0; linha < quantidadelinhas; linha++){
        for (int coluna = 0; coluna <= linha; coluna++){
            printf("%d ", ++contador);
        }
        printf("\n");
    }
}

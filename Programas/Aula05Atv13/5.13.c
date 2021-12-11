#include <stdio.h>
#include <stdlib.h>

int somatorio(int vetorfuncao[], int contador){
    int respostafuncao;

    if(contador == 4){
        return 0;
    } else{
        respostafuncao = vetorfuncao[contador] + somatorio(vetorfuncao, contador+1);
        return respostafuncao;
    }
}

void main(){
    int vetor[4];
    int soma;

    for(int linha = 0; linha < 4; linha++){
        scanf("%d", &vetor[linha]);
    }

    soma = somatorio(vetor, 0);
    printf("%d", soma);
}

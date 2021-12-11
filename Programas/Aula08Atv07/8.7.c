#include <stdio.h>
#include <stdlib.h>

void main(){
    int *ponteiro1 = NULL;
    int tamanho, negativos;

    scanf("%d", &tamanho);

    int numeros[tamanho];

    for (int indice = 0; indice < tamanho; indice++){
        scanf("%d", &numeros[indice]);
    }

    ponteiro1 = numeros;

    negativos = negativo(ponteiro1, tamanho);
    printf("%d", negativos);

}

int negativo(int *ponteirofuncao, int variavel){
    int contador = 0;
    for (int indice = 0; indice < variavel; indice++){
        if (*ponteirofuncao < 0){
          contador++;
        }
        ponteirofuncao++;
    }

    return contador;
}

#include <stdio.h>
#include <stdlib.h>

void main(){
    int numeros[5], *ponteiro1 = NULL;

    for (int indice = 0; indice < 5; indice++){
        scanf("%d", &numeros[indice]);
    }

    ponteiro1 = numeros;

    imprimindo(ponteiro1);
}

void imprimindo(int *ponteiro2){
    for (int indice = 0; indice < 5; indice++){
        printf("%d ", *ponteiro2);
        ponteiro2++;
    }
}

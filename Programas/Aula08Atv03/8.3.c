#include <stdio.h>
#include <stdlib.h>

void main(){
    int numeros[5];
    int *ponteiro1 = NULL;

    for (int indice = 0; indice < 5; indice++){
        scanf("%d", &numeros[indice]);
    }

    ponteiro1 = numeros;

    for (int indice = 0; indice < 5; indice++){
        printf("%d ", ((*ponteiro1)*2));
        ponteiro1++;
    }

}

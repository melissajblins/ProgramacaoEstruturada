#include <stdio.h>
#include <stdlib.h>

void main(){
    char numeros[5];
    char *ponteiro1 = NULL;
    char variavel;

    for (int indice = 0; indice < 5; indice++){
        scanf("%s", &numeros[indice]);
    }

    ponteiro1 = numeros;

    scanf("%s", &variavel);

    for (int indice = 0; indice < 5; indice++){
        *ponteiro1 = variavel;
        printf("%c", *ponteiro1);
        ponteiro1++;
    }
}

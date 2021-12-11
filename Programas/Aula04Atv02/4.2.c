#include <stdio.h>
#include <stdlib.h>

void main(){
    int numeros[5];
    int contador;
    float media, soma = 0;

    for (contador = 0; contador < 5; contador++){
        printf("Digite o numero %d: ", (contador+1));
        scanf("%d", &numeros[contador]);
        soma = soma + numeros[contador];
    }

    for(contador = 0; contador < 5; contador++){
        printf("%d ", numeros[contador]);
    }

    media = (float)soma/(float)5.0;
    printf("\n %.2f", media);
}

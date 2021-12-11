#include <stdio.h>
#include <stdlib.h>

void main(){
    int quantidade, maior, contador;
    int *ponteiro1 = NULL;

    scanf("%d", &quantidade);

    int numeros[quantidade];

    for (int indice = 0; indice < quantidade; indice++){
        scanf("%d", &numeros[indice] );
    }

    ponteiro1 = numeros;

    for (int indice = 0; indice < quantidade; indice++){
        if (indice == 0){
            maior = *ponteiro1;
        }
        else{
            if (maior < *ponteiro1){
                maior = *ponteiro1;
            }
        }
        ponteiro1++;
    }

    ponteiro1 = numeros;

    for (int indice = 0; indice < quantidade; indice++){
        if (*ponteiro1 == maior){
            contador++;
        }
        ponteiro1++;
    }

    printf("O numero %d ocorreu %d vezes.", maior, contador);
}

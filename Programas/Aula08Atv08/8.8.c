#include <stdio.h>
#include <stdlib.h>

void main(){
    int numeros[3][3];
    int *ponteiro1;

    for (int indice = 0; indice < 3; indice++){
        for(int indice2 = 0; indice2 < 3; indice2++){
            scanf("%d", &numeros[indice][indice2]);
        }
    }

    ponteiro1 = numeros;

    for(int indice = 0; indice < 9; indice++){
        printf("%d\n", (*(ponteiro1+indice)+1));
    }
}

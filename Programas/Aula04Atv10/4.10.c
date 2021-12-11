#include <stdio.h>
#include <stdlib.h>

void main(){
    float numeros[10];
    float auxiliar;
    int indice, contagem;

    for(indice = 0; indice < 10; indice++){
        printf("Digite um numero: ");
        scanf("%f", &numeros[indice]);
    }

    for (indice = 0; indice < 10; indice++){
        for (contagem = indice; contagem < 10; contagem++){
            if(numeros[indice] > numeros[contagem]){
                auxiliar = numeros[indice];
                numeros[indice] = numeros[contagem];
                numeros[contagem] = auxiliar;
            }
        }
    }
    for (indice = 0; indice < 10; indice++){
        printf("%.1f \n", numeros[indice]);
    }
}

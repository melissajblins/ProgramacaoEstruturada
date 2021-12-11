#include <stdio.h>
#include <stdlib.h>

void main(){
    int numero, indice, contagem;
    int numeros[10];

    scanf("%d", &numero);
    numeros[0] = numero;
    for(indice = 1; indice < 10; indice++){
        scanf("%d", &numero);
        for (contagem = 0; contagem < indice; contagem++){
            if(numeros[contagem] == numero){
                printf("Numero já digitado! Digite outro numero! \n");
                scanf("%d", &numero);
            } else{
                numeros[indice] = numero;
            }
        }
    }

    for (indice = 0; indice < 10; indice++){
        printf("%d \n", numeros[indice]);
    }
}

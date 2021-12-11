#include <stdio.h>
#include <stdlib.h>

void main(){
    int numeros[6];
    int contador;

    for (contador = 0; contador < 6; contador++){
        printf("Digite o numero %d: ", (contador+1));
        scanf("%d", &numeros[contador]);
    }
    for (contador = 5; contador >= 0; contador--){
        printf("%d ", numeros[contador]);
    }
}

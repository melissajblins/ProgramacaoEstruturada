#include <stdio.h>
#include <stdlib.h>

void main(){
    float numeros[5];
    int contador, contadornegativos = 0;
    float soma = 0;

    for(contador = 0; contador < 5; contador++){
        printf("Digite um numero: ");
        scanf("%f", &numeros[contador]);
        if (numeros[contador] < 0){
            contadornegativos = contadornegativos + 1;
        }
        else{
            soma = soma + numeros[contador];
        }
    }

    printf("%d \n", contadornegativos);
    printf("%f \n", soma);
}

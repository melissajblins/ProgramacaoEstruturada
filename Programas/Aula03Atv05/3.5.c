#include <stdio.h>
#include <stdlib.h>

void main(){
    int numero, contador = 1, soma = 0;

    printf("Digite um numero: ");
    scanf("%d", &numero);

    while (contador < numero){
        if (numero % contador == 0){
            soma = soma + contador;
        }
        contador = contador + 1;

    }
    printf("%d", soma);
}

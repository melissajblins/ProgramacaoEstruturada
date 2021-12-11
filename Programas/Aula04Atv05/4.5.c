#include <stdio.h>
#include <stdlib.h>


int numeros[10];

void printNumero(int impar) {
    for(int indice = 0; indice < 10; indice++){
        int numero = numeros[indice];
        if (numero % 2 == impar){
            for (int contagem = 0; contagem < 10; contagem++){
                if (numeros[indice] == numeros[contagem] && contagem < indice ){
                   numero = -1;
                   break;
                }
            }
            if (numero != -1){
              printf("%d \n", numero);
            }
        }
    }

}

void main(){

    int contador, indice, contagem, menor, maior;

    for(indice = 0; indice < 10; indice++){
        printf("Digite um numero: ");
        scanf("%d", &numeros[indice]);
        if (indice == 0){
            menor = numeros[indice];
            maior = numeros[indice];
        } else {
            if (numeros[indice] < menor){
                menor = numeros[indice];
            } else if (numeros[indice] > maior){
                maior = numeros[indice];
            }
        }
    }

    printf("Numeros pares: \n");
    printNumero(0);
    printf("Numeros impares: \n");
    printNumero(1);

    printf("Maior: %d \n", maior);
    printf("Menor: %d \n", menor);
}

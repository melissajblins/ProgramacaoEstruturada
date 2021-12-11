#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void quadradoPerfeito(int numero){
    float raiz;
    raiz = sqrt(numero);
    //printf("%f", raiz);
    if (raiz == (int)raiz){
        printf("Eh um quadrado perfeito! \n");
    } else {
        printf("Nao eh um quadrado perfeito! \n");
    }
}

void main(){
    int numero;

    printf("Digite um numero: ");
    scanf("%d", &numero);

    quadradoPerfeito(numero);
}

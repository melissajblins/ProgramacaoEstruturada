#include <stdio.h>
#include <stdlib.h>

float ordem(float variavel, float auxiliar){

    printf("%.0f ", auxiliar);

    if (auxiliar == variavel){
        return auxiliar;
    } else {
        return ordem(variavel, auxiliar+1);
    }
}

void main(){
    float numero;

    printf("Digite um número: ");
    scanf("%f", &numero);

    ordem(numero, 0);
}

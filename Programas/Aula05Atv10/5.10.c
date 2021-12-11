#include <stdio.h>
#include <stdlib.h>
#include <math.h>

float cubo(float variavel){
    float respostafuncao = 0;

    if (variavel < 0){
        variavel = variavel*(-1);
    }

    if (variavel == 0){
        return 0;
    } else{
         respostafuncao = pow(variavel, 3) + cubo(variavel-1);
         return respostafuncao;
    }
}



void main(){
    float numero, resposta = 0;

    printf("Digite um número: ");
    scanf("%f", &numero);

    resposta = cubo(numero);
    printf("%.0f", resposta);
}

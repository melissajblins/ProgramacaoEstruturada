#include <stdio.h>
#include <stdlib.h>

float calculadora(){
    int numero1, numero2;
    float resultado;
    char operacao;

    printf("Digite um numero: ");
    scanf("%d", &numero1);
    printf("Digite outro numero: ");
    scanf("%d", &numero2);
    printf("Escolha uma operacao: ");
    scanf(" %c", &operacao);

    switch (operacao){
        case '+':
            resultado = (numero1 + numero2);
            return resultado;
            break;
        case '-':
            resultado = (numero1 - numero2);
            return resultado;
            break;
        case '/':
            resultado = ((float)numero1/numero2);
            return resultado;
            break;
        case '*':
            resultado = (numero1 * numero2);
            return resultado;
            break;
    }
}


void main(){
    float resposta;

    resposta = calculadora();
    printf("%f", resposta);
}

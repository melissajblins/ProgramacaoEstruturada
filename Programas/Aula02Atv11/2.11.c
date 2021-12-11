#include <stdio.h>
#include <stdlib.h>

void main(){
    int operacao1234, numero01, numero02, soma, subtracao, multiplicacao;
    double divisao, numero01d, numero02d;


    printf("Digite [1] para somar. \n");
    printf("Digite [2] para subtrair. \n");
    printf("Digite [3] para dividir. \n");
    printf("Digite [4] para multiplicar. \n");
    scanf("%d", &operacao1234);
    if (operacao1234 < 1 || operacao1234 > 4){
        printf("Numero Invalido! \n");
    }
    else {
        printf("Digite o primeiro numero: ");
        scanf("%d", &numero01);
        printf("Digite o segundo numero: ");
        scanf("%d", &numero02);

        if (operacao1234 == 1){
            soma = (numero01 + numero02);
            printf("O resultado da soma eh: %d", soma);
        }
        else if (operacao1234 == 2){
            if (numero01 > numero02){
                subtracao = (numero01 - numero02);
                printf("O resultado da subtracao eh: %d", subtracao);
            }
            else {
                subtracao = (numero02 - numero01);
                printf("O resultado da subtracao eh: %d", subtracao);
            }
        }
        else if (operacao1234 == 3){
            numero01d = numero01;
            numero02d = numero02;
            if (numero01d < numero02d){
                divisao = (numero02d/numero01d);
                printf("O resultado da divisao eh: %lf", divisao);
            }
            else {
                divisao = (numero01d/numero02d);
                printf("O resultado da divisao eh: %lf", divisao);
            }
        }
        else{
            multiplicacao = (numero01*numero02);
            printf("O resultado da multiplicacao eh: %d", multiplicacao);
        }
    }
}

#include <stdio.h>
#include <stdlib.h>

int multiplicacao(int variavel1, int variavel2){
        int resultadofuncao;

        if (variavel2 == 0){
            return 0;
        } else{
            resultadofuncao = variavel1 + multiplicacao(variavel1, variavel2-1);
            return resultadofuncao;
        }


}

void main(){
    int numero1, numero2, resultado;

    printf("Digite um número: ");
    scanf("%d", &numero1);
    printf("Digite outro número: ");
    scanf("%d", &numero2);

    resultado = multiplicacao(numero1, numero2);
    printf("%d", resultado);
}

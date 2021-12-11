#include <stdio.h>
#include <stdlib.h>

float somatorio(int variavel){
    float respostafuncao;

    if(variavel < 0){
        variavel = variavel * (-1);
    }

    if (variavel == 1){
        return 1;
    } else{
        respostafuncao = variavel + somatorio(variavel-1);
        return respostafuncao;
    }

}

void main(){
    float numero, resposta = 0;

    printf("Digite um número: ");
    scanf("%f", &numero);

    resposta = somatorio(numero);
    printf("%.0f", resposta);
}

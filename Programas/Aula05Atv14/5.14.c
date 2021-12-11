#include <stdio.h>
#include <stdlib.h>


int exponencial(int variavel1, int variavel2){
    int respostafuncao;

    if(variavel2 == 0){
        return 1;
    } else{
        respostafuncao = variavel1*exponencial(variavel1, variavel2-1);
        return respostafuncao;
    }

}

void main(){
    int numero1, numero2, resultado;

    printf("Digite um número: ");
    scanf("%d", &numero1);
    printf("Digite outro número: ");
    scanf("%d", &numero2);

    resultado = exponencial(numero1, numero2);
    printf("%d", resultado);
}

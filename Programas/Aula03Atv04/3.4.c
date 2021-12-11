#include <stdio.h>
#include <stdlib.h>

void main(){
    int operacao = -1;
    //int numero1, numero2, numero3, soma2, soma3, multiplicacao, menor = 2147483647, contador = 0;
    int numero1, numero2, numero3, resultado, menor = 2147483647, contador = 0;



    while (operacao != 0){
        printf("1: soma dois numeros (a + b) \n");
        printf("2: soma tres numeros (a + b + c \n");
        printf("3: multiplicacao de dois numeros (a + b) \n");
        printf("0: Sair \n");
        scanf("%d", &operacao);
        if (operacao == 0 && contador == 0){
            printf("Nenhum calculo foi realizado!");
        }
        else if (operacao == 1){
            printf("Digite o primeiro numero: ");
            scanf("%d", &numero1);
            printf("Digite o segundo numero: ");
            scanf("%d", &numero2);
            resultado = (numero1 + numero2);
            printf("(a+b) = %d \n", resultado);
            contador++;
            if (resultado < menor){
                menor = resultado;
            }
        } else if (operacao == 2){
            printf("Digite o primeiro numero: ");
            scanf("%d", &numero1);
            printf("Digite o segundo numero: ");
            scanf("%d", &numero2);
            printf("Digite o terceiro numero: ");
            scanf("%d", &numero3);
            resultado = (numero1 + numero2 + numero3);
            printf("(a+b+c) = %d \n", resultado);
            contador++;
            if (resultado < menor){
                menor = resultado;
            }
        } else if (operacao == 3){
            printf("Digite o primeiro numero: ");
            scanf("%d", &numero1);
            printf("Digite o segundo numero: ");
            scanf("%d", &numero2);
            resultado = (numero1*numero2);
            printf("(a*b) = %d \n", resultado);
            contador++;
            if (resultado < menor){
                menor = resultado;
            }
        }
    }
    if (contador > 0){
        printf("Menor resultado: %d", menor);
    }
}




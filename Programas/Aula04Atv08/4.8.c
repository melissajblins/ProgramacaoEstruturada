#include <stdio.h>
#include <stdlib.h>

void main(){
    int numeros[6], auxiliar[6];
    int indice, contagem, variavel, contador = 0, flag = 0;

    for(indice = 0; indice < 6; indice++){
        printf("Digite um numero: ");
        scanf("%d", &numeros[indice]);
    }

    for(indice = 0; indice < 6; indice++){
        for(contagem = indice + 1; contagem < 6; contagem++){
            if (numeros[indice] == numeros[contagem]){
               for(variavel = 0; variavel < 10; variavel++){
                if(auxiliar[variavel] == numeros[contagem])
                    flag = 1;
               }
               if (flag == 0){
                auxiliar[contador] = numeros[indice];
                contador++;
               }
            }
        }
    }
    if (contador == 0){
        printf("Nao existem valores iguais!");
    }
    for(indice = 0; indice < contador; indice++){
        printf("%d \n", auxiliar[indice]);
    }
}


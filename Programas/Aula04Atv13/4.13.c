#include <stdio.h>
#include <stdlib.h>

void main(){
    char letras[8];
    int tamanho, indice;

    printf("Digite ate 5 caracteres: ");
    scanf("%s", letras);
    tamanho = strlen(letras);

    while(tamanho > 5){
        printf("Digite novamente a string com ate 5 caracteres: \n");
        scanf("%s", letras);
        tamanho = strlen(letras);
    }

    for(indice = tamanho; indice >= 0; indice--){
        printf("%c ", letras[indice]);
    }

}

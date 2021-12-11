#include <stdio.h>
#include <stdlib.h>

void main(){
    char letras[8];
    int indice;

    printf("Digite ate 8 caracteres: ");
    scanf("%s", letras);

    for(indice = 0; letras[indice] != '\0'; indice++){
        printf("%c \n", letras[indice]);
    }
    printf("%d", indice);

}

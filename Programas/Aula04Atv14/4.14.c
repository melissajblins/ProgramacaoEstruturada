#include <stdio.h>
#include <stdlib.h>

void main(){
    char letras[8];
    char variavel;
    int indice, vogais, tamanho, contador = 0;

    printf("Digite ate 8 caracteres: ");
    scanf("%s", letras);
    printf("Escolha uma variavel: ");
    scanf("%s", &variavel);

    tamanho = strlen(letras);

    for(indice = 0; indice < tamanho; indice++){
        switch (letras[indice]){
            case 'a':
                letras[indice] = variavel;
                contador++;
                break;
             case 'e':
                letras[indice] = variavel;
                contador++;
                break;
             case 'i':
                letras[indice] = variavel;
                contador++;
                break;
             case 'o':
                letras[indice] = variavel;
                contador++;
                break;
             case 'u':
                letras[indice] = variavel;
                contador++;
                break;
        }
    }

    printf("A string possui %d vogais. \n", contador);
    for (indice = 0; indice < tamanho; indice++){
        printf("%c", letras[indice]);
    }
}

#include <stdio.h>
#include <stdlib.h>

void main(){
    char letras[8];
    int tamanho, indice;

    printf("Digite uma palavra de 8 caracteres: ");
    scanf("%s", letras);
    tamanho = strlen(letras);

    while (tamanho != 8){
        printf("Voce digitou uma string com %d caractere(s)! \n", tamanho);
        printf("A string deve ter 8 caracteres. Por favor, digite uma nova string: \n");
        scanf("%s", letras);
        tamanho = strlen(letras);
    }

    for(indice = 0; indice < 4; indice++){
        printf("%c", letras[indice]);
    }
}

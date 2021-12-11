#include <stdio.h>
#include <stdlib.h>

void main(){
    char caractere;
    printf("Digite um simbolo de pontuacao: \n");
    scanf("%c", &caractere);

    switch (caractere){
        case '.':
            printf("Ponto final. \n");
            break;
        case ',':
            printf("Vírgula. \n");
            break;
        case '!':
            printf("Exclamacao. \n");
            break;
        case ';':
            printf("Ponto e virgula. \n");
            break;
        case ':':
            printf("Dois pontos. \n");
            break;
        default:
            printf("Não consta nos dados. \n");

    }
}

#include <stdio.h>
#include <stdlib.h>

enum semana {Domingo, Segunda = 1, Terca, Quarta, Quinta, Sexta};

void main(){
    enum semana dia;

    printf("Digite o dia da semana: ");
    scanf("%d", &dia);

    switch(dia){
        case 0:
            printf("Domingo");
            break;
        case 1:
            printf("Segunda");
            break;
        case 2:
            printf("Terca");
            break;
        case 3:
            printf("Quarta");
            break;
        case 4:
            printf("Quinta");
            break;
        case 5:
            printf("Sexta");
            break;
        case 6:
            printf("Sabado");
            break;
    }
}

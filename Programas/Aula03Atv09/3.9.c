#include <stdio.h>
#include <stdlib.h>

char DiaSemana (int dia){
    do {
        printf("Digite o dia da semana: ");
        scanf("%d", &dia);
        if (dia> 7 || dia < 1 ){
            printf("O numero deve ser >=1 e <=7! \n");
        }
    } while (dia > 7 || dia < 1);

    if (dia == 1){
        printf("Domingo");
    } else if (dia == 2){
        printf("Segunda-feira");
    } else if (dia == 3){
        printf("Terça-feira");
    } else if (dia == 4){
        printf("Quarta-feira");
    } else if (dia == 5){
        printf("Quinta-feira");
    } else if (dia == 6){
        printf("Sexta-feira");
    } else {
        printf("Sabado");
    }
}

void main(){
    DiaSemana(0);
}

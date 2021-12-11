#include <stdio.h>
#include <stdlib.h>

void main(){
    float valor = 780, primeiro, segundo, terceiro;

    primeiro = valor*0.46;
    segundo = valor*0.32;
    terceiro = valor*0.22;

    printf("Primeiro ganhador: %.2f \n", primeiro);
    printf("Segundo ganhador: %.2f \n", segundo);
    printf("Terceiro ganhador: %.2f \n", terceiro);
}

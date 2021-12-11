#include <stdio.h>
#include <stdlib.h>

void main(){
    int numero01, numero02;

    printf("Digite o primeiro numero: ");
    scanf("%d", &numero01);
    printf("Digite o segundo numero: ");
    scanf("%d", &numero02);

    if (numero01 == numero02){
        printf("Numeros Iguais! \n");
    }
    else if (numero01 > numero02){
        printf("O %d eh o maior numero! \n", numero01);
    }
    else{
        printf("O %d eh o maior numero! \n", numero02);
    }

}

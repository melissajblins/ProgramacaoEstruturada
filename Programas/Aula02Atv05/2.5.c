#include <stdio.h>
#include <stdlib.h>

void main(){
    int dia, mes, ano;

    printf("Digite o dia: ");
    scanf("%d", &dia);
    printf("Digite o mes: ");
    scanf("%d", &mes);
    printf("Digite o ano: ");
    scanf("%d", &ano);

    printf("%d/%d/%d", dia, mes, ano);

}

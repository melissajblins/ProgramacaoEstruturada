#include <stdio.h>
#include <stdlib.h>

void main(){
    int numero;
    float fatorial = 1.0, numeroE = 0;

    printf("Digite um numero: ");
    scanf("%d", &numero);

    for (int vezes = 1; vezes <= numero; vezes++){
        fatorial = (fatorial * vezes);
        numeroE = (numeroE + ((float)1.0/fatorial));
    }
    printf("%f \n", fatorial);
    printf("%f \n", numeroE);
}

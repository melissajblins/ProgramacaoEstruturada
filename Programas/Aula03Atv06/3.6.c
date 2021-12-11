#include <stdio.h>
#include <stdlib.h>

int main(){
    int numero, contador;
    float harmonico = 0;

    printf("Digite um numero: ");
    scanf("%d", &numero);

    for (contador = 1; contador <= numero; contador++){
        harmonico = harmonico + (float)1/contador;
    }

    printf("%.1f", harmonico);
    return 0;
}

#include <stdio.h>
#include <stdlib.h>

void main(){
    int A[5];
    int B[5];
    int C[5];
    int contador;

    for (contador = 0; contador < 5; contador++){
        printf("Digite um numero: ");
        scanf("%d", &A[contador]);
    }
    for (contador = 0; contador < 5; contador++){
        printf("Digite um numero: ");
        scanf("%d", &B[contador]);
    }
    for (contador = 0; contador < 5; contador++){
        C[contador] = A[contador] - B[contador];
    }

    for (contador = 0; contador < 5; contador++){
        printf("%d ", C[contador]);
    }
}

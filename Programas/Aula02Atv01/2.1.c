#include <stdio.h>
#include <stdlib.h>

void main(){
    int alunos, alunas, total;

    printf("Digite o numero de alunos: ");
    scanf("%d", &alunos);
    printf("Digite o numero de alunas: ");
    scanf("%d", &alunas);

    total = (alunas + alunos);

    printf("Alunos: %d \n", alunos);
    printf("Alunas: %d \n", alunas);
    printf("Total: %d \n", total);

}

#include <stdio.h>
#include <stdlib.h>

void main(){
    int alunas, alunos;

    printf("Digite o número de alunas: ");
    scanf("%d", &alunas);
    printf("Digite o número de alunos: ");
    scanf("%d", &alunos);

    if (alunas == alunos){
        printf("Mesma quantidade!");
    }
    else if (alunas > alunos) {
        printf("Quantidade de alunas eh maior do que de alunos!");
    }
    else {
        printf("Quantidade de alunos eh maior do que de alunas!");
    }

}

#include <stdio.h>
#include <stdlib.h>

struct alunos{
    int matricula;
    char nome[50];
    float nota01;
    float nota02;
    float nota03;
};

struct medias{
    float media;
};

void main(){
    struct alunos pessoa[4];
    struct medias notas[4];
    int linha, maiormedia, contador;

    for(linha = 0; linha < 4; linha++){
        printf("Digite a matricula do aluno: ");
        scanf("%d", &pessoa[linha].matricula);
        printf("Digite o nome do aluno: ");
        scanf("%s", &pessoa[linha].nome);
        printf("Digite a primeira nota do aluno: ");
        scanf("%f", &pessoa[linha].nota01);
        printf("Digite a segunda nota do aluno: ");
        scanf("%f", &pessoa[linha].nota02);
        printf("Digite a terceira nota do aluno: ");
        scanf("%f", &pessoa[linha].nota03);
        printf("\n ---------------------- \n");
    }

    for (linha = 0; linha < 4; linha++){
        notas[linha].media = ((pessoa[linha].nota01 + pessoa[linha].nota02 + pessoa[linha].nota03)/3);
        if (linha == 0){
            maiormedia = notas[linha].media;
            contador = linha;
        } else{
            if (notas[linha].media > maiormedia){
                maiormedia = notas[linha].media;
                contador = linha;
            }
        }
    }

    printf("%d \n", pessoa[contador].matricula);
    printf("%s \n", pessoa[contador].nome);
    printf("%.1f \n", pessoa[contador].nota01);
    printf("%.1f \n", pessoa[contador].nota02);
    printf("%.1f \n", pessoa[contador].nota03);
}

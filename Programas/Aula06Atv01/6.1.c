#include <stdio.h>
#include <stdlib.h>

struct cadastro{
    char nome[50];
    int idade;
};

void main(){
    struct cadastro c;

    printf("Digite o nome: ");
    scanf("%s", &c.nome);
    printf("Digite a idade: ");
    scanf("%d", &c.idade);

    printf("Nome: %s \n", c.nome);
    printf("Idade: %d \n", c.idade);
}

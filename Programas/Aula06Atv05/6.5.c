#include <stdio.h>
#include <stdlib.h>

struct atleta{
    char nome[50];
    int idade;
    float altura;
};

void main(){
    struct atleta pessoa[4];
    int linha, auxiliar;
    int idade[4];

    for (linha = 0; linha < 4; linha++){
        printf("Digite o nome do atleta: ");
        scanf("%s", &pessoa[linha].nome);
        printf("Digite a idade do atleta: ");
        scanf("%d", &pessoa[linha].idade);
        idade[linha] = pessoa[linha].idade;
        printf("Digite a altura do atleta: ");
        scanf("%f", &pessoa[linha].altura);
        printf("---------------------------- \n");
    }

    for (linha = 1; linha < 4; linha++){
        for (int comparador = 0; comparador < linha; comparador++){
            if(idade[linha] > idade[comparador]){
                auxiliar = idade[linha];
                idade[linha] = idade[comparador];
                idade[comparador] = auxiliar;
            }
        }
    }

    for (linha = 0; linha < 4; linha++){
        printf("%d ", idade[linha]);
    }
}

#include <stdio.h>
#include <stdlib.h>

struct atleta{
    char nome[50];
    int idade;
    float altura;
};

void main(){
    struct atleta pessoa[4];
    int linha, maisvelho, contadoridade, contadoraltura;
    float maisalto;

    for (linha = 0; linha < 4; linha++){
        printf("Digite o nome do atleta: ");
        scanf("%s", &pessoa[linha].nome);
        printf("Digite a idade do atleta: ");
        scanf("%d", &pessoa[linha].idade);
        printf("Digite a altura do atleta: ");
        scanf("%f", &pessoa[linha].altura);
        printf("---------------------------- \n");
    }

    for (linha = 0; linha < 4; linha++){
        if (linha == 0){
            maisvelho = pessoa[linha].idade;
            maisalto = pessoa[linha].altura;
        } else {
            if (pessoa[linha].idade > maisvelho){
                maisvelho = pessoa[linha].idade;
                contadoridade = linha;
            }
            if(pessoa[linha].altura > maisalto){
                maisalto = pessoa[linha].altura;
                contadoraltura = linha;
            }
        }
    }
    printf("Mais alto: %s \n", pessoa[contadoraltura].nome);
    printf("Mais velho: %s", pessoa[contadoridade].nome);
}

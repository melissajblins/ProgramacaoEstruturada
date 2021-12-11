#include <stdio.h>
#include <stdlib.h>

int iguais(a, b);
int linhamenor(a, b);
int linhamaior(a, b);
int resultado, a, b;

void main(){
    int TamanhoLinha, TamanhoColuna, linha, coluna;

    printf("Digite o numero de linhas: ");
    scanf("%d", &TamanhoLinha);
    printf("Digite o numero de colunas: ");
    scanf("%d", &TamanhoColuna);

    int numeros[TamanhoLinha][TamanhoColuna];

    for(linha = 0; linha < TamanhoLinha; linha++){
        for(coluna = 0; coluna < TamanhoColuna; coluna++){
            if (linha < coluna){
                numeros[linha][coluna] = linhamenor(linha, coluna);
            } else if (linha == coluna){
                numeros[linha][coluna] = iguais(linha, coluna);
            } else {
                numeros[linha][coluna] = linhamaior(linha, coluna);
            }
        }
    }

    for(linha = 0; linha < TamanhoLinha; linha++){
        for(coluna = 0; coluna < TamanhoColuna; coluna++){
            printf("%d ", numeros[linha][coluna]);
        }
        printf("\n");
    }
}

int iguais(a, b){
    resultado = (3*a*a - 1);
    return resultado;
}

int linhamenor(a, b){
    resultado = (2*a + 7*b -2);
    return resultado;
}

int linhamaior(a, b){
    resultado = (4*a*a*a + 5*b*b +1);
    return resultado;

}

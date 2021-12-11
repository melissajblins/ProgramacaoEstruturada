#include <stdio.h>
#include <stdlib.h>

#define tamanho_vetor 5

struct lista{
    int quantidade;
    int numeros[tamanho_vetor];
};

typedef struct lista Lista;

Lista* cria_Lista(){
    Lista *li;
    li = (Lista*) malloc(sizeof(Lista));

    if(li!=NULL){
        li->quantidade=0;
    }

    return li;
}

int troca(Lista *li, int valor1, int valor2){
    int linha = 0, posicao1, posicao2, auxiliar1, auxiliar2;
    if(li == NULL){
        return 0;
    }
    else{
        while(linha < li->quantidade && li->numeros[linha] != valor1){
            linha++;
        }
        posicao1 = linha;
        auxiliar1 = li->numeros[posicao1];
        while(linha < li->quantidade && li->numeros[linha] != valor2){
            linha++;
        }
        posicao2 = linha;
        auxiliar2 = li->numeros[posicao2];
    }
    li->numeros[posicao1] = auxiliar2;
    li->numeros[posicao2] = auxiliar1;
}


int insere_lista(Lista *li, int n){
    if(li == NULL){
        return 0;
    }
    else{
        if(li->quantidade == tamanho_vetor){
            return 0;
        }
        else{
            li->numeros[li->quantidade] = n;
            li->quantidade++;
            return 1;
        }
    }
}

int print_conteudo(Lista *li){
    int linha = 0, resposta = 0;
    if(li == NULL){
        return 0;
    }
    else{
        while(linha < li->quantidade){
            printf("%d ", li->numeros[linha]);
            linha++;
        }
    }
}


void main (){
    int numero, troca1, troca2;
    Lista *ponteirolista01;

    ponteirolista01 = cria_Lista();

    for(int linha = 0; linha < tamanho_vetor; linha++){
        scanf("%d", &numero);
        insere_lista(ponteirolista01, numero);
    }

    scanf("%d", &troca1);
    scanf("%d", &troca2);

    troca(ponteirolista01, troca1, troca2);
    print_conteudo(ponteirolista01);
}

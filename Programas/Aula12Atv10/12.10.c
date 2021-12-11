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

int conferindo(Lista *li1, Lista *li2){
    int linha = 0;
    if(li1 == NULL){
        return 0;
    } else if (li2 == NULL){
        return 0;
    }
    else{
        while(linha < 5){
            if (li1->numeros[linha] != li2->numeros[linha]){
                return 1;
            }
            linha++;
        }
    }
}



void main (){
    int numero, variavel;
    Lista *ponteirolista01;
    Lista *ponteirolista02;

    ponteirolista01 = cria_Lista();

    for(int linha = 0; linha < 5; linha++){
        scanf("%d", &numero);
        insere_lista(ponteirolista01, numero);
    }

    ponteirolista02 = cria_Lista();

    for(int linha = 0; linha < 5; linha++){
        scanf("%d", &numero);
        insere_lista(ponteirolista02, numero);
    }

    variavel = conferindo(ponteirolista01, ponteirolista02);
    if (variavel == 1) {
        printf("Diferentes!");
    } else {
        printf("Iguais!");
    }
}

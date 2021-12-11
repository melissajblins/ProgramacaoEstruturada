#include <stdio.h>
#include <stdlib.h>

#define tamanho_vetor 20

struct elemento{
    int numero;
    struct elemento *prox;
};

typedef struct elemento Elem;

typedef struct elemento* Lista;

Lista* cria_lista(){
    Lista *li;

    li = (Lista*) malloc(sizeof(Lista));

    if(li != NULL){
        *li = NULL;
    }
    return li;
}

Lista* cria_Lista(){
    Lista *li;
    li = (Lista*) malloc(sizeof(Lista));

    if(li!=NULL){
        li->quantidade = 0;
    }

    return li;
}

int insere_lista_final(Lista *li, int n){
    if(li == NULL){
        return 0;
    }
    else{
        Elem *no;
        no  = (Elem*) malloc(sizeof(Elem));

        if(no == NULL){
            return 0;
        }
        else{
            no->numero = n;
            no->prox = NULL;
            if((*li) == NULL){
                *li = no;
            }
            else{
                Elem *aux;
                aux = *li;
                while(aux->prox != NULL){
                    aux = aux->prox;
                }
                aux->prox = no;
            }
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
            printf("%d ", (li->numeros[linha]));
            linha++;
        }
    }
}


void main (){
    int tamanho_lista1, tamanho_lista2, numero;
    Lista *ponteirolista01;
    Lista *ponteirolista02;
    Lista *ponteirolista03;

    printf("Digite o tamanho da primeira lista: ");
    scanf("%d", &tamanho_lista1);

    ponteirolista01 = cria_Lista();
    ponteirolista03 = cria_Lista();

    for(int linha = 0; linha < tamanho_lista1; linha++){
        scanf("%d", &numero);
        insere_lista_final(ponteirolista01, numero);
        insere_lista_final(ponteirolista03, numero);
    }

    printf("Digite o tamanho da segunda lista: ");
    scanf("%d", &tamanho_lista2);

    ponteirolista02 = cria_Lista();

    for(int linha = 0; linha < tamanho_lista2; linha++){
        scanf("%d", &numero);
        insere_lista_final(ponteirolista02, numero);
        insere_lista_final(ponteirolista03, numero);
    }

    print_conteudo(ponteirolista03);
}

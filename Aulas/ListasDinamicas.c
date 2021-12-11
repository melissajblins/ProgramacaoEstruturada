#include<stdio.h>
#include<stdlib.h>

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

void libera_lista(Lista *li){
    if(li != NULL){
        Elem *no;
        while((*li) != NULL){
            no = *li;
            *li = (*li)->prox;
            free(no);
        }
        free(li);
    }
}

int tamanho_lista(Lista *li){
    int cont = 0;
    if(li == NULL){
        return 0;
    }
    else{
        Elem *no = *li;
        while(no != NULL){
            cont++;
            no = no->prox;
        }
        return cont;
    }
}

int lista_vazia(Lista *li){
    if(li == NULL){
        return 1;
    }
    else{
        if(*li == NULL){
            return 1;
        }
        else{
            return 0;
        }
    }
}

int insere_lista_inicio(Lista *li, int n){
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
            no->prox = (*li);
            *li = no;
            return 1;
        }
    }
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

int remove_lista_inicio(Lista *li){
    if(li == NULL){
        return 0;
    }
    else if((*li) == NULL){
        return 0;
    }
    else{
        Elem *no;
        no = *li;
        *li = no->prox;
        free(no);
        return 1;
    }
}

int remove_lista_fim(Lista *li){
    if(li == NULL){
        return 0;
    }
    else if((*li) == NULL){
        return 0;
    }
    else{
        Elem *ant, *no;
        no = *li;
        while(no->prox != NULL){
            ant = no;
            no = no->prox;
        }
        if(no == (*li)){
            *li = no->prox;
        }
        else{
            ant->prox = no->prox;
        }
        free(no);
        return 1;
    }
}

int remove_lista(Lista *li, int elem){
    if(li == NULL){
        return 0;
    }
    else if((*li) == NULL){
        return 0;
    }
    else{
        Elem *ant, *no;
        no = *li;
        while(no != NULL && no->numero != elem){
            ant = no;
            no = no->prox;
        }
        if(no == NULL){
            return 0;
        }
        else{
            if(no == *li){
                *li = no->prox;
            }
            else{
                ant->prox = no->prox;
            }
            free(no);
            return 1;
        }
    }
}

int busca_lista_posicao(Lista *li, int pos){
    if(li == NULL || pos <= 0){
        exit(0);
    }
    Elem *no;
    no = *li;
    int i = 1, resp = 0;

    while(no != NULL && i< pos){
        no = no->prox;
        i++;
    }
    if(no == NULL){
        exit(0);
    }
    else{
        resp = no->numero;
        return resp;
    }
}

int busca_lista_conteudo(Lista *li, int conte){
    if(li == NULL){
        exit(0);
    }
    Elem *no;
    no = *li;
    int i = 1;

    while(no != NULL && no->numero != conte){
        no = no->prox;
        i++;
    }
    if(no == NULL){
        exit(0);
    }
    else{
        return i;
    }
}

void main(){
    Lista *pList;
    int tam = 0, cheia = 0, vazia = 0, resp = 0;

    pList = cria_lista();

    insere_lista_inicio(pList, 12);
    insere_lista_inicio(pList, 5);

    tam = tamanho_lista(pList);
    printf("Tamanho da lista: %i\n", tam);

    vazia = lista_vazia(pList);
    printf("Lista vazia? %i\n", vazia);

    insere_lista_final(pList, 10);

    insere_lista_inicio(pList, 77);

    remove_lista(pList, 10);

    resp = busca_lista_posicao(pList, 2);
    printf("Conteudo: %i na posicao 2.\n", resp);

    resp = busca_lista_conteudo(pList, 5);
    printf("Posicao: %i do conteudo 5.", resp);

    libera_lista(pList);
}

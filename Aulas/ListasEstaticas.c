#include<stdio.h>
#include<stdlib.h>

#define tamArray 4

struct lista{
    int qtd;
    int num[tamArray];
};

typedef struct lista Lista;

Lista* cria_Lista(){
    Lista *li;
    li = (Lista*) malloc(sizeof(Lista));

    if(li!=NULL){
        li->qtd=0;
    }

    return li;
}

void libera_lista(Lista *li){
    free(li);
}

int tamanho_Lista(Lista* li){
    int tam=0;

    if(li == NULL){
        return -1;
    }
    else{
        tam = li->qtd;
        return tam;
    }
}

int lista_Cheia(Lista *li){
    if(li == NULL){
        return -1;
    }
    else{
        if(li->qtd == tamArray){
            return 1;
        }
        else{
            return 0;
        }
    }
}

int lista_Vazia(Lista *li){
    if(li == NULL){
        return -1;
    }
    else{
        if(li->qtd == 0){
            return 1;
        }
        else{
            return 0;
        }
    }
}

int insere_lista(Lista *li, int n){
    if(li == NULL){
        return 0;
    }
    else{
        if(li->qtd == tamArray){
            return 0;
        }
        else{
            li->num[li->qtd] = n;
            li->qtd++;
            return 1;
        }
    }
}

int insere_lista_final(Lista *li, int n){
    if(li == NULL){
        return 0;
    }
    else{
        if(li->qtd == tamArray){
            return 0;
        }
        else{
            li->num[li->qtd] = n;
            li->qtd++;
            return 1;
        }
    }
}

int insere_lista_inicio(Lista *li, int n){
    if(li == NULL){
        return 0;
    }
    else{
        if(li->qtd == tamArray){
            return 0;
        }
        else{
            for(int i=li->qtd-1; i >= 0; i--){
                li->num[i+1] = li->num[i];
            }
            li->num[0] = n;
            li->qtd++;
        }
    }
}

int remove_lista_inicio(Lista *li){
    if(li == NULL){
        return 0;
    }
    else{
        if(li->qtd == 0){
            return 0;
        }
        else{
            for(int k=0; k < li->qtd-1; k++){
                li->num[k] = li->num[k+1];
            }
            li->qtd--;
            return 1;
        }
    }
}

int remove_lista_final(Lista *li){
    if(li == NULL){
        return 0;
    }
    else{
        if(li->qtd == 0){
            return 0;
        }
        else{
            li->qtd--;
            return 1;
        }
    }
}

int remove_lista_elemento(Lista *li, int elem){
    int k = 0, i = 0;
    if(li == NULL){
        return 0;
    }
    else{
        if(li->qtd == 0){
            return 0;
        }
        else{
            while(i < li->qtd && li->num[i] != elem){
                i++;
            }
            if(i == li->qtd){
                return 0;
            }
            for(k=i; k < li->qtd-1; k++){
                li->num[k] = li->num[k+1];
            }
            li->qtd--;
            return 1;
        }
    }
}

int busca_lista_pos(Lista *li, int pos){
    int resp=0;
    if(li == NULL || pos <= 0 || pos > li->qtd){
        exit(0);
    }
    else{
        resp = li->num[pos-1];
        return resp;
    }
}

int busca_lista_conteudo(Lista *li, int conteu){
    int i = 0, resp = 0;
    if(li == NULL){
        return 0;
    }
    else{
        while(i < li->qtd && li->num[i] != conteu){
            i++;
        }

        if(i == li->qtd){
            return 0;
        }
        else{
            return i+1;
        }
    }
}

void main(){
    int tam=0, cheia=0, vazia=0, resp=0;
    Lista *pList;

    pList = cria_Lista();

    insere_lista(pList, 12);
    insere_lista(pList, 5);

    tam = tamanho_Lista(pList);
    printf("Tamanho da lista: %i\n", tam);

    cheia = lista_Cheia(pList);
    printf("Lista cheia? %i\n", cheia);

    vazia = lista_Vazia(pList);
    printf("Lista vazia? %i\n", vazia);

    insere_lista_final(pList, 10);

    insere_lista_inicio(pList, 77);

    remove_lista_elemento(pList, 10);

    resp = busca_lista_pos(pList, 2);
    printf("Conteudo: %i na posicao 2.\n", resp);

    resp = busca_lista_conteudo(pList, 5);
    printf("Posicao: %i do conteudo 5.", resp);

    libera_lista(pList);
}

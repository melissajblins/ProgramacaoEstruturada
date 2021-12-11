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

int remove_lista_inicio(Lista *li, int vezes){
    if(li == NULL){
        return 0;
    }
    else{
        if(li->quantidade == 0){
            return 0;
        }
        else{
            while (vezes > 0){
                for(int k = 0; k < li->quantidade-1; k++){
                li->numeros[k] = li->numeros[k+1];
                }
                li->quantidade--;
                vezes--;
            }
        }
    }
}

int remove_lista_final(Lista *li, int vezes){
    if(li == NULL){
        return 0;
    }
    else{
        if(li->quantidade == 0){
            return 0;
        }
        else{
            while (vezes > 0) {
                li->quantidade--;
                vezes--;
            }
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
    int numero, numeros_quantidade;
    Lista *ponteirolista01;

    ponteirolista01 = cria_Lista();

    for(int linha = 0; linha < tamanho_vetor; linha++){
        scanf("%d", &numero);
        insere_lista(ponteirolista01, numero);
    }

    scanf("%d", &numeros_quantidade);

    remove_lista_final(ponteirolista01, numeros_quantidade);
    print_conteudo(ponteirolista01);
}

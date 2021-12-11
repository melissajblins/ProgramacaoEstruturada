#include <stdio.h>
#include <stdlib.h>

#define TAMANHO 200

struct fila {
    int quantidade;
    int inicio;
    int fim;
    int numeros[TAMANHO];
};

typedef struct fila Fila;

Fila* cria_Fila(){
    Fila *fi = NULL;

    fi = (Fila *) malloc(sizeof(Fila));

    if (fi != NULL){
        fi->inicio = 0;
        fi->quantidade = 0;
        fi->fim = 0;
    }

    return fi;
}

int insere_Fila (Fila *fi, int numero_inserir){
    if (fi == NULL){
        return 0;
    }
    else {
        if (fi->quantidade == TAMANHO){
            return 0;
        }
        else{
            fi->numeros[fi->fim] = numero_inserir;
            fi->fim = fi->fim + 1;
            fi->quantidade++;
            return 1;

        }
    }
}

int remove_Fila (Fila *fi){
    if (fi == NULL || fi->quantidade == 0){
        return 0
    }
    else {
        fi->inicio = fi->inicio+1;
        printf("ID %d removido com sucesso!", fi->inicio-1);
        fi->quantidade--;

        return 1;
    }

}

int imprimindo_Fila (Fila *fi){
    if (fi == NULL){
        return 0;
    }
    else {
        for (int linha = 0; linha < fi->quantidade; linha++){
            printf("Paciente %d - ID: %d\n", linha+1,  fi->numeros[fi->inicio]);
            fi->inicio++;
        }
    }

}

void main(){
    int testando[5];
    Fila *ponteirofila;

    ponteirofila = cria_Fila();

    for (int linha = 0; linha < 5; linha++){
        scanf("%d", &testando[linha]);
        insere_Fila(ponteirofila, testando[linha]);
    }

    imprimindo_Fila(ponteirofila);
}

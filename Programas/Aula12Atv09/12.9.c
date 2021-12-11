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

    int calculos(Lista *li){
    int linha = 0, pares = 0, posicao = 0;
    float media = 0, soma = 0,  maior = 0;
    if(li == NULL){
        return 0;
    }
    else{
        while (linha < li->quantidade){
            if (li->numeros[linha] % 2 == 0){
                pares = pares + 1;
            }

            if (linha == 0){
                maior = li->numeros[linha];
                posicao = linha;
            } else {
                if (li->numeros[linha] > maior){
                    maior = li->numeros[linha];
                    posicao = linha;
                }
            }

            soma = soma + li->numeros[linha];
            linha++;
        }
    }

     media = (float)((soma)/5);

    printf("a) Qtd. pares: %d\n", pares);
    printf("b) Media: %.2f\n", media);
    printf("c) Maior: %.0f\n", maior);
    printf("d) Posicao (Maior): %d\n", posicao);
    printf("e) Soma: %.0f\n", soma);

}

    void main (){
        float numero;
        Lista *ponteirolista01;

        ponteirolista01 = cria_Lista();

        for(int linha = 0; linha < tamanho_vetor; linha++){
            scanf("%f", &numero);
            insere_lista(ponteirolista01, numero);
        }

        calculos(ponteirolista01);
    }

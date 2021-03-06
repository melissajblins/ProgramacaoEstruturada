#include <stdio.h>
#include <stdlib.h>
#define TAMANHO 200 //Quantidade de linhas dos vetores e matrizes

char nome[TAMANHO][TAMANHO]; // Matriz para armazenar 200 nomes
char email[TAMANHO][50]; // Matriz para armazenar 200 e-mails
double cpf[TAMANHO]; // Vetor para armazanar 200 CPFs
double telefone[TAMANHO]; // Vetor utilizado para armazenar 200 telefones
int idade[TAMANHO]; // Vetor utilizado para armazenar 200 valores de idade
char comorbidade[TAMANHO][50]; // Matriz para armazenar possiveis comorbidades do usuario
int vacina_numero[TAMANHO]; // Vetor para armazenar a vacina em numero
char vacina_nome[TAMANHO][50]; // Vetor para armazenar o nome da vacina
int vacina_segunda_dose[TAMANHO]; // Vetor para armazenar a segunda dose da vacina
int ID[TAMANHO];  //Vetor para armazenar 200 IDs
int opcao; // Variavel utilizada para armazenar as opcoes do usuario
int edicao_opcao; // Variavel utilizada para editar o cadastro
int edicao; // Variavel utilizada para editar um dado


void cadastro(); // Prototipo da funcao cadastro
void pesquisa(); // Prototipo da funcao pesquisa
void lista(); // Prototipo da funcao lista


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
        return 0;
    }
    else {
        fi->inicio = fi->inicio+1;
        fi->quantidade--;

        return 1;
    }

}

int imprimindo_Fila (Fila *fi){
    int ID_impresso = fi->inicio;
    if (fi == NULL){
        return 0;
    }
    else {
        for (int linha = 0; linha < fi->quantidade; linha++){
            printf("Paciente %d - ID: %d\n", linha+1,  fi->numeros[ID_impresso]);
            ID_impresso++;
        }
    ID_impresso = fi->inicio;
    }
}

Fila *ponteirooficial;
Fila *ponteirodemonstracao;

int main(void){ // Funcao principal - Com a criacao do MENU PRINCIPAL

        // Foi apagada todas as funcoes do Main pois usaremos o Menu principal para direcionar o usuario com mais facilidade

        printf("\n==== PROGRAMA INICIADO ====\n\n");

        ponteirooficial = cria_Fila();
        ponteirodemonstracao = cria_Fila();

        do{
        system("cls"); // Criada a funcao System que permite executar codigos do prompt de comando dentro do programa
        printf("\n---- MENU ----\n1 - Cadastrar\n2 - Listar todos\n3 - Pesquisar\n4 - Ordem de vacina????o\n5 - Sair\n\n"); // Cabecario do Menu com todos os itens necessarios
        scanf("%d", &opcao);
        switch(opcao) { // Criada o switch para comparar a op??????o que o usuario escolheu

        case 1:
            cadastro(); // Caso o usuario escolha a opcao 1, o mesmo sera direcionado para a funcao cadastro na linha 58
            break;

        case 2:         // Caso o usuario escolha a opcao 2, o mesmo sera direcionado para a funcao lista na linha 140
            lista();
            break;

        case 3:         // Caso o usuario escolha a opcao 3, o mesmo sera direcionado para a funcao pesquisa na linha 88
            pesquisa();
            break;

        case 4:
            filas();
            break;
        case 5:          // Caso o usuario escolha a opcao 4, o programa sera fechado.
            printf("\n==== PROGRAMA ENCERRADO ====\n");
            system("exit");
            break;

        default:
            printf("Opcao invalida! Pressione o enter."); // Mensagem para o usuario caso ele digite algum valor diferente do pedido no Menu

            getchar(); // Colocamos a funcao getchar para manter a tela aberta quando o usuario escolher uma outra opcao.
            getchar(); // Dependendo do sistema operacional, compilador e demais fatores, o programa pode funcionar com apenas um getchar, por motivos de precaucao colocamos dois.
            break;
        }
    }while(opcao!=4);

}

void cadastro(){ // Funcao para cadastrar pessoas
    static int linha; //Variavel que estaciona o valor de linha
    printf(" \n----------------------------------- \n"); // Inicio do cadastro
    do{
        printf("   CADASTRO DE VACINACAO COVID-19  \n"); // Cabecalho da Funcao cadastro
        printf("----------------------------------- \n"); // Inicio do cadastro
        printf("\nDigite o nome: "); // Mensagem para o usuario digitar o nome
        getchar();
        fflush(stdin);
        fgets(nome[linha], 200, stdin);
        printf("\nDigite o e-mail: "); // Mensagem para o usuario digitar o e-mail
        scanf("%s", &email[linha]);
        printf("\nDigite o CPF (somente numeros): ");  // Mensagem para o usuario digitar o CPF
        scanf("%lf", &cpf[linha]);
        printf("\nDigite o telefone (somente numeros): ");  // Mensagem para o usuario digitar o telefone
        scanf("%lf", &telefone[linha]);
        printf("\nDigite a idade (somente numeros): ");  // Mensagem para o usuario digitar a sua idade
        scanf("%d", &idade[linha]);
        printf("\nDigite a(s) comorbidade(s) (digitar '-' se nao tiver. Se tiver mais de uma, separa-las por ','): "); // Mensagem para o usuario digitar sua(s) comorbidades (caso tenha)
        getchar();
        fflush(stdin);
        fgets(comorbidade[linha], 200, stdin);
        printf("\nQual vacina o usu??rio tomar???\n"); // Mensagem para o usuario digitar a vacina
        printf("[1] - Coronavac \n[2] - AstraZeneca \n[3] - Pfizer \n[4] - Janssen\n\n"); // Menu da vacina
        scanf("%d", &vacina_numero[linha]);
        do {
            printf("\n----------------------------- \n");
            printf("Digite 1 para editar alguma informa????o ou outro valor para terminar o cadastro: "); // Inicio da edicao
            scanf("%d", &edicao_opcao);
            if (edicao_opcao == 1){ // Se o usuario escolher 1 comeca a edicao
                printf("\n======== EDITANDO CADASTRO ========\n"); // Cabecalho da edicao
                printf("\nQual dado voc?? deseja editar?\n"); // Mensagem para o usuario digitar qual dado deseja editar
                printf("[1] - Nome \n[2] - E-mail \n[3] - CPF \n[4] - Telefone \n[5] - Idade \n[6] - Comorbidades \n[7] - Vacina\n\n"); // Menu para escolher o dado de edicao
                scanf("%d", &edicao);
                printf("\n------ Op????o %d selecionada ------\n", edicao);
                switch (edicao){
                    case 1: // Editando nome
                        printf("\nDigite o nome: ");
                        getchar();
                        fflush(stdin);
                        fgets(nome[linha], 200, stdin);
                        printf("\nNome alterado!");
                        break;
                    case 2: // Editando e-mail
                        printf("\nDigite o e-mail: ");
                        scanf("%s", &email[linha]);
                        printf("\nE-mail alterado!");
                        break;
                    case 3: // Editando CPF
                        printf("\nDigite o CPF (somente numeros): ");
                        scanf("%lf", &cpf[linha]);
                        printf("\nCPF alterado!");
                        break;
                    case 4: // Editando telefone
                        printf("\nDigite o telefone (somente numeros): ");
                        scanf("%lf", &telefone[linha]);
                        printf("\nTelefone alterado!");
                        break;
                    case 5: // Editando idade
                        printf("\nDigite a idade (somente numeros): ");
                        scanf("%d", &idade[linha]);
                        printf("\nIdade alterada!");
                        break;
                    case 6: // Editando comorbidade
                        printf("\nDigite a(s) comorbidade(s) (digitar '-' se nao tiver. Se tiver mais de uma, separa-las por ','): ");
                        getchar();
                        fflush(stdin);
                        fgets(comorbidade[linha], 200, stdin);
                        printf("\nComorbidades alteradas!");
                        break;
                    case 7: // Editando vacina
                        printf("\nQual vacina o usu??rio tomar???\n");
                        printf("[1] - Coronavac \n[2] - AstraZeneca \n[3] - Pfizer \n[4] - Janssen\n\n");
                        scanf("%d", &vacina_numero[linha]);
                        printf("\nVacina alterada!");
                        break;
                }
            }
        } while (edicao_opcao == 1);
        if (vacina_numero[linha] == 1){
            strcpy (vacina_nome[linha],"Coronavac"); // Atribuindo nome a vacina 1
            vacina_segunda_dose[linha] = 28; // Calculando data da segunda dose
            printf("\nSua proxima dose de %s dever?? ser aplicada em at?? %d dias", vacina_nome[linha], vacina_segunda_dose[linha]);
        } else if (vacina_numero[linha] == 2){
            strcpy (vacina_nome[linha],"Astrazeneca"); // Atribuindo nome a vacina 2
            vacina_segunda_dose[linha] = 90; // Calculando data da segunda dose
            printf("\nSua proxima dose de %s dever?? ser aplicada em at?? %d dias", vacina_nome[linha], vacina_segunda_dose[linha]);
        } else if (vacina_numero[linha] == 3){
            strcpy (vacina_nome[linha],"Pfizer"); // Atribuindo nome a vacina 3
            vacina_segunda_dose[linha] = 21; // Calculando data da segunda dose
            printf("\nSua proxima dose de %s dever?? ser aplicada em at?? %d dias", vacina_nome[linha], vacina_segunda_dose[linha]);
        } else {
            strcpy (vacina_nome[linha],"Janssen"); // Atribuindo nome a vacina 4
            vacina_segunda_dose[linha] = 0; // Janssen possui dose unica
            printf("\nA vacina da %s possui dose ??nica.", vacina_nome[linha]);
        }
        ID[linha] = rand() % 1000; //Guarda no ID um n??mero aleat??rio
        printf("\nCadastro realizado com sucesso! Numero do comprovante: %d\n", ID[linha]); //Mensagem apresentando o ID
        insere_Fila(ponteirooficial, ID[linha]);
        insere_Fila(ponteirodemonstracao, ID[linha]);
        printf("\n----------------------------- \n");
        printf("\nDigite 1 para continuar cadastrando ou outro valor para sair: ");  // Mensagem para o usuario escolher a opcao
        scanf("%d", &opcao);
        linha++; // Acrescentar um ao valor da linha
        printf("\n ----------------------------------- \n"); // Finalizacao do cadastro
    }while(opcao == 1); //Condicao de parada do cadastro

}
void pesquisa(){
    int opcao, contador = 0;
    int idPesquisa;
    double cpfPesquisa;
    char emailPesquisa[50];
    int i;
    do{
        printf(" ----------------------------- \n");
        printf("     PESQUISAR CADASTRADOS      \n");
        printf(" ----------------------------- \n");
        printf("\nDigite o numero:\n1 - Pesquisa pelo CPF\n2 - Pesquisa pelo e-mail\n3 - Pesquisa pelo ID\n");
        scanf("%d", &opcao);
        printf("\n------ Op????o %d selecionada ------\n", opcao);
        switch(opcao){
        case 1:
            printf("\nDigite o CPF: ");
            scanf("%lf", &cpfPesquisa);
            for(i = 0; i < TAMANHO; i++){
                if(cpf[i]==cpfPesquisa){
                    printf("\nID: %d\nNome: %sEmail: %s\nCPF: %.0lf\nTelefone: %.0lf\nIdade: %d\nComorbidade: %sVacina: %s\nSua proxima dose dever?? ser tomada em at?? %d dias",ID[i], nome[i], email[i], cpf[i], telefone[i], idade[i], comorbidade[i], vacina_nome[i], vacina_segunda_dose[i]);
                    contador++;
                }
            }
            if (contador == 0){
                printf("\nCPF nao encontrado!\n");
            }
            contador = 0;
            break;
        case 2:
            printf("\nDigite o e-mail: ");
            scanf("%s", &emailPesquisa);
            for(i = 0; i < TAMANHO; i++){
                if(strcmp(email[i], emailPesquisa)==0){
                    printf("\nID: %d\nNome: %sEmail: %s\nCPF: %.0lf\nTelefone: %.0lf\nIdade: %d\nComorbidade: %sVacina: %s\nSua proxima dose dever?? ser tomada em at?? %d dias",ID[i], nome[i], email[i], cpf[i], telefone[i], idade[i], comorbidade[i], vacina_nome[i], vacina_segunda_dose[i]);
                    contador++;
                }
            }
            if (contador == 0){
                printf("\nE-mail nao encontrado!\n");
            }
            contador = 0;
            break;
        case 3:
            printf("\nDigite o ID: ");
            scanf("%d", &idPesquisa);
            for(i = 0; i < TAMANHO; i++){
                if(ID[i]==idPesquisa){
                    printf("\nID: %d\nNome: %sEmail: %s\nCPF: %.0lf\nTelefone: %.0lf\nIdade: %d\nComorbidade: %sVacina: %s\nSua proxima dose dever?? ser tomada em at?? %d dias",ID[i], nome[i], email[i], cpf[i], telefone[i], idade[i], comorbidade[i], vacina_nome[i], vacina_segunda_dose[i]);
                    contador++;
                }
            }
            if (contador == 0){
                printf("\nID nao encontrado!\n");
            }
            contador = 0;
            break;
        default:
            printf("\nOpcao invalida!");
            break;
        }

        printf("\n----------------------------- \n");
        printf("\nDigite 1 para continuar pesquisando ou outro valor para sair: ");
        printf("\n");
        scanf("%d", &opcao);
    }while(opcao == 1);

}


void lista(){
    int i,regs;
    FILE *arq_lista;
    FILE* verifica;


    verifica = fopen("Lista_cadastro.txt", "r");
    if(verifica==NULL){
        arq_lista = fopen("Lista_cadastro.txt","w"); //abrindo para manter a linha head
        fprintf(arq_lista,"ID; Nome ; Email ; CPF ; Telefone ; Idade ; Comorbidade; Nome da vacina; Segunda dose (dias)\n" );
        fclose(arq_lista);
    }



    if(arq_lista == NULL){
        printf("Erro na abertura do arquivo!\n");
        return 1;
    }



    else{
        arq_lista = fopen("Lista_cadastro.txt","a"); //abrindo para gravacao de novos cadastros
        for(i=0; i<TAMANHO; i++){
            if(cpf[i]>0){
                   fprintf(arq_lista,"%d; %s ; %s ; %.0lf ; %.0lf ; %d ; %s; %s; %d \n",ID[i], nome[i], email[i], cpf[i], telefone[i], idade[i], comorbidade[i], vacina_nome[i], vacina_segunda_dose[i]);
                   regs = i+1;
                  }
            else{
                break;
            }
        }
        fclose(arq_lista);
        printf("%i registros salvos!\nPressione o enter.",regs);
    }

    getchar(); // Colocamos a funcao getchar para manter a tela aberta quando o usuario escolher uma outra opcao.
    getchar(); // Dependendo do sistema operacional, compilador e demais fatores, o programa pode funcionar com apenas um getchar, por motivos de precaucao colocamos dois.

}

void filas (){
    int chamada = 0, contador_ID = 0, autenticando_remocao;

    do{
        printf(" ----------------------------- \n");
        printf("     ORDEM DE VACINA????O      \n");
        printf(" ----------------------------- \n");
        imprimindo_Fila(ponteirodemonstracao);
        printf("\nDigite 1 para chamar o paciente ou outro valor para sair: ");
        scanf("%d", &chamada);
        if (chamada == 1){
            autenticando_remocao = remove_Fila(ponteirodemonstracao);
            if (autenticando_remocao == 0){
                printf("\nN??o ?? poss??vel chamar outro paciente!\n\n");
                chamada = 0;
            } else {
                printf("\nO paciente com ID: %d foi chamado!\n\n", ID[contador_ID]);
            }
        }
        contador_ID++;
    } while (chamada == 1);
}

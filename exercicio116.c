/*
            Código escrito por Wagner Gaspar
            Agosto de 2021

            Aula 251: Lista Simplesmente Encadeada
            Como remover COM a estrutura lista?
*/
#include <stdio.h>
#include <stdlib.h>


typedef struct no{
    int valor;
    struct no *proximo;
}No;

typedef struct{
    No *inicio;
    int tam;
}Lista;

void criar_lista(Lista *lista){
    lista->inicio = NULL;
    lista->tam = 0;
}

// procedimento para inserir no início
void inserir_no_inicio(Lista *lista, int num){
    No *novo = malloc(sizeof(No));

    if(novo){
        novo->valor = num;
        novo->proximo = lista->inicio;
        lista->inicio = novo;
        lista->tam++;
    }
    else
        printf("Erro ao alocar memoria!\n");
}

// procedimento para inserir no fim
void inserir_no_fim(Lista *lista, int num){
    No *aux, *novo = malloc(sizeof(No));

    if(novo){
        novo->valor = num;
        novo->proximo = NULL;

        // é o primeiro?
        if(lista->inicio == NULL)
            lista->inicio = novo;
        else{
            aux = lista->inicio;
            while(aux->proximo)
                aux = aux->proximo;
            aux->proximo = novo;
        }
        lista->tam++;
    }
    else
        printf("Erro ao alocar memoria!\n");
}

// procedimento para inserir no meio
void inserir_no_meio(Lista *lista, int num, int ant){
    No *aux, *novo = malloc(sizeof(No));

    if(novo){
        novo->valor = num;
        // é o primeiro?
        if(lista->inicio == NULL){
            novo->proximo = NULL;
            lista->inicio = novo;
        }
        else{
            aux = lista->inicio;
            while(aux->valor != ant && aux->proximo)
                aux = aux->proximo;
            novo->proximo = aux->proximo;
            aux->proximo = novo;
        }
        lista->tam++;
    }
    else
        printf("Erro ao alocar memoria!\n");
}

void inserir_ordenado(Lista *lista, int num){
    No *aux, *novo = malloc(sizeof(No));

    if(novo){
        novo->valor = num;
        if(lista->inicio == NULL){
            novo->proximo = NULL;
            lista->inicio = novo;
        }
        else if(novo->valor < lista->inicio->valor){
            novo->proximo = lista->inicio;
            lista->inicio = novo;
        }
        else{
            aux = lista->inicio;
            while(aux->proximo && novo->valor > aux->proximo->valor)
                aux = aux->proximo;
            novo->proximo = aux->proximo;
            aux->proximo = novo;
        }
        lista->tam++;
    }
    else
        printf("Erro ao alocar memoria!\n");
}

No* remover(Lista *lista, int num){
    No *aux, *remover = NULL;

    if(lista->inicio){
        if(lista->inicio->valor == num){
            remover = lista->inicio;
            lista->inicio = remover->proximo;
            lista->tam--;
        }
        else{
            aux = lista->inicio;
            while(aux->proximo && aux->proximo->valor != num)
                aux = aux->proximo;
            if(aux->proximo){
                remover = aux->proximo;
                aux->proximo = remover->proximo;
                lista->tam--;
            }
        }
    }

    return remover;
}

void imprimir(Lista lista){
    No *no = lista.inicio;
    printf("\n\tLista tam %d: ", lista.tam);
    while(no){
        printf("%d ", no->valor);
        no = no->proximo;
    }
    printf("\n\n");
}

int main(){

    int opcao, valor, anterior;
    //No *lista = NULL;
    Lista lista;
    No *removido;

    criar_lista(&lista);

    do{
        printf("\n\t0 - Sair\n\t1 - InserirI\n\t2 - inserirF\n\t3 - InserirM\n\t4 - InserirO\n\t5 - Remover\n\t6 - Imprimir\n");
        scanf("%d", &opcao);

        switch(opcao){
        case 1:
            printf("Digite um valor: ");
            scanf("%d", &valor);
            inserir_no_inicio(&lista, valor);
            break;
        case 2:
            printf("Digite um valor: ");
            scanf("%d", &valor);
            inserir_no_fim(&lista, valor);
            break;
        case 3:
            printf("Digite um valor e o valor de referencia: ");
            scanf("%d%d", &valor, &anterior);
            inserir_no_meio(&lista, valor, anterior);
            break;
        case 4:
            printf("Digite um valor: ");
            scanf("%d", &valor);
            inserir_ordenado(&lista, valor);
            break;
        case 5:
            printf("Digite um valor a ser removido: ");
            scanf("%d", &valor);
            removido = remover(&lista, valor);
            if(removido){
                printf("Elemento removido: %d\n", removido->valor);
                free(removido);
            }
            else
                printf("elemento inexistente!\n");
            break;
        case 6:
            imprimir(lista);
            break;
        default:
            if(opcao != 0)
                printf("Opcao invalida!\n");
        }

    }while(opcao != 0);

    return 0;
}
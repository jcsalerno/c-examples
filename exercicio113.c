#include <stdio.h>
#include <stdlib.h>

typedef struct no{
    int valor;
    struct no *proximo;   
}No;

typedef struct {
    No *inicio;
    int tam;
}Lista;

void criarLista(Lista *lista){
    lista->inicio = NULL;
    lista->tam = 0;
}


/*procedimento para inserir no inicio*/

void inserirNoInicio(Lista *lista, int num){
    No  *novo = malloc(sizeof(No));

    if(novo){
        novo->valor = num;
        novo->proximo = lista->inicio;
        lista->inicio = novo;
        lista->tam++;

    }
    else 
    printf("Erro ao alocar memória\n");
}
/*procedimento para inserir no fim da lista*/

void inserirNoFim(Lista *lista, int num){
    No *aux, *novo = malloc(sizeof(No));

    if(novo){
        novo->valor = num;
        novo->proximo = NULL;

        if(lista->inicio == NULL)
           lista->inicio = novo;
           else{
                 aux = lista->inicio;
                 while (aux->proximo)
                 aux = aux->proximo;
                 aux->proximo = novo;     
           }
           lista->tam++;

    }
    else 
        printf("Erro ao alocar memória!\n");
}
/*Procedimento para inserir no meio*/

void inserirNoMeio(Lista *lista, int num, int ant){
    No *aux, *novo = malloc(sizeof(No));

    if(novo){
        novo->valor = num;

        if(lista->inicio == NULL){
            novo->proximo = NULL;
            lista->inicio = novo;
        }
        else{
            aux = lista->inicio;
            while(aux->valor !=ant && aux->proximo)
                aux = aux->proximo;
            novo->proximo = aux->proximo;
            aux->proximo = novo;
        }
        lista->tam++;


    }
    else 
        printf("Erro ao alocar memória!\n");
}

void imprimirLista(Lista lista){
    No *no = lista.inicio;
    printf("\n\tLista tamanho %d:", lista.tam);
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
    criarLista(&lista);

    do{
        printf("\n\t 0-Sair\n\t 1-InserirI\n\t 2-InserirF\n\t 3-InserirM\n\t 4-Imprimir");
        scanf("%d", &opcao);

        switch (opcao){
        case 1:
            printf("Digile um valor: ");
            scanf("%d", &valor);
            inserirNoInicio(&lista, valor);
            break;

        case 2:
            printf("Digite um valor ");
            scanf("%d", &valor);
            inserirNoFim(&lista, valor);
            break;

        case 3:
            printf("Digite um valor e valor de referencia:\n");
            scanf("%d%d", &valor, &anterior);
            inserirNoMeio(&lista, valor, anterior);
            break;

        case 4:
            imprimirLista(lista);
            break;            
        
        default:
            if(opcao !=0)
                printf("Opção Invalida!\n");
        }

    }while (opcao != 0);
    

    return 0;
}
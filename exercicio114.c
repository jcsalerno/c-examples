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

/* inserir ordernado versão 1*/
/*void inserirOrdernado(No **lista, int num){
    No *aux, *novo = malloc(sizeof(No));
    
    if(novo){
        novo->valor = num;
        if(*lista==NULL){
            novo->proximo = NULL;
            *lista = novo;
        }
        else if(novo->valor < (*lista)->valor){
            novo->proximo = *lista;
            *lista = novo;
        }
        else{
            aux = *lista;
            while (aux->proximo && novo->valor > aux->proximo->valor)
                    aux = aux->proximo;
                    novo->proximo = aux->proximo;
                    aux->proximo = novo;
        }
        lista->tam++;

    }
    else 
        printf("Erro ao alocar memória!\n");
}*/

/*Inserir Ordernado versão 2*/
void inserirOdernado(Lista *lista, int num){
    No *aux, *novo = malloc(sizeof(No));

    if(novo){
        novo->valor = num; 
        if(lista->inicio == NULL){
            novo->proximo = NULL;
            lista->inicio = novo;
        }
        else if (novo->valor < lista->inicio->valor){
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
        printf("Erro ao alocar memória!\n");
}

No* remover(No **lista, int num){
    No *aux, *remover = NULL; 

    if(*lista){
        if((*lista)->valor == num){
            remover = *lista;
            *lista = remover->proximo;
        }
        else{
            aux = *lista;
            while(aux->proximo && aux->proximo->valor != num)
                aux = aux->proximo;

                if(aux->proximo){
                    remover = aux->proximo;
                    aux->proximo = remover->proximo;
                }

        }
    }



    return remover;

}

void imprimirLista(Lista lista){
    No *no = lista.inicio;
    printf("\n\tLista tamanho:", lista.tam);
    while(no){
        printf("%d ", no->valor);
        no = no->proximo;
    }
    printf("\n\n");
}


int main(){
    int opcao, valor, anterior;
    No *removido, *lista = NULL;
   

    /*Lista lista;
    criarLista(&lista);*/

    do{
        printf("\n\t 0-Sair\n\t 1-InserirI\n\t 2-InserirF\n\t 3-InserirM\n\t 4-InserirOrd\n\t 5-Remover\n\t 6-Imprimir");
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
             printf("Digite um valor ");
             scanf("%d", &valor);
             inserirOrdernado(&lista, valor);

        break; 

        case 5:
            printf("Digite um valor para ser removido\n");
            scanf("%d", &valor);
            removido = remover (&lista, valor);
            if(removido){
                printf("ELemento a ser removido: %d\n", removido->valor);
                free(removido);
            }
        break;   

        case 6:
            imprimirLista(lista);
            break;
        
        default:
            if(opcao !=0)
                printf("Opção Invalida!\n");
        }

    }while (opcao != 0);
    

    return 0;
}
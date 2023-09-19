/*Aqui está um exemplo de código em C fora da função main que implementa uma lista encadeada simples, com funções para inserir, remover e buscar elementos:*/

#include <stdio.h>
#include <stdlib.h>

// Estrutura para representar um elemento da lista
typedef struct ListNode {
int data;
struct ListNode *next;
} ListNode;

// Estrutura para representar a lista
typedef struct LinkedList {
ListNode *head;
int size;
} LinkedList;

// Inicializa uma nova lista
LinkedList *initList() {
LinkedList *list = malloc(sizeof(LinkedList));
list->head = NULL;
list->size = 0;
return list;
}

// Insere um novo elemento no início da lista
void insertFront(LinkedList *list, int data) {
ListNode *node = malloc(sizeof(ListNode));
node->data = data;
node->next = list->head;
list->head = node;
list->size++;
}

// Remove o primeiro elemento da lista
void removeFront(LinkedList *list) {
if (list->head == NULL) {
return;
}
ListNode *node = list->head;
list->head = node->next;
free(node);
list->size--;
}

// Busca um elemento na lista
ListNode *search(LinkedList *list, int data) {
ListNode *node = list->head;
while (node != NULL && node->data != data) {
node = node->next;
}
return node;
}

int main() {
LinkedList *list = initList();
insertFront(list, 1);
insertFront(list, 2);
insertFront(list, 3);
insertFront(list, 4);
removeFront(list);
ListNode *node = search(list, 2);
if (node != NULL) {
printf("Element found: %d\n", node->data);
} else {
printf("Element not found\n");
}
return 0;
}
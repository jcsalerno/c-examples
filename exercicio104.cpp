#include<stdio.h>

struct elemento {
  char id;
  int prox;
  };

int achaIndice(char valor) {
  return valor - 'A';
  }

void mostrarFis(struct elemento lista[], int p) {
  int i;
  for (i = 0; i < 26; i++) {
    printf("%c - %d", lista[i].id, lista[i].prox);
    if (i == p)
      printf("     <---\n");
    else
      printf("\n");
    }
  }

int inserirF(char valor, int p, struct elemento v[]) {
  int aux, pos;
  pos = achaIndice(valor);
  v[pos].prox = -1;
  if (p == -1)
    return pos;
  // else
  aux = p;
  while (v[aux].prox != -1) {
    aux = v[aux].prox;
    }
  v[aux].prox = pos;
  return p;
  }

int inserirI(char valor, int p, struct elemento v[]) {
  int pos;
  pos = achaIndice(valor);
  v[pos].prox = p;
  return pos;
  }

void mostrarLog(struct elemento lista[], int p) {
  while (p != -1) {
    printf("%c", lista[p].id);
    if (lista[p].prox != -1) printf("  ->  ");
    p = lista[p].prox;
    }
  }

int removerPosicao(int seq, int p, struct elemento v[]) {
  int aux;
  if (p == -1)
    return -1;
  if (seq == 1)
    return v[p].prox;
  aux = p;
  for ( ; seq > 2 && aux != -1; seq--)
    aux = v[aux].prox;
  if (aux != -1 && v[aux].prox!= -1) {
    v[aux].prox = v[v[aux].prox].prox;
    }
  return p;
  }


main() {
  int i, primeiro;
  char c;
  struct elemento vet[26];
  for (i = 0; i < 26; i++) {
    vet[i].id = i + 'A';
    vet[i].prox = -1;
    }
  primeiro = -1;
  primeiro = inserirF('X', primeiro, vet);
  primeiro = inserirF('D', primeiro, vet);
  primeiro = inserirF('L', primeiro, vet);
  primeiro = inserirF('B', primeiro, vet);
//  primeiro = inserirF('A', primeiro, vet);
//  primeiro = inserirF('J', primeiro, vet);

  primeiro = inserirI('Z', primeiro, vet);

  mostrarFis(vet, primeiro);
  printf("\n\n");
  mostrarLog(vet, primeiro);
  printf("\n\n");

  primeiro = removerPosicao(6 ,primeiro, vet);
  primeiro = removerPosicao(5 ,primeiro, vet);
  primeiro = removerPosicao(1 ,primeiro, vet);
  primeiro = removerPosicao(8 ,primeiro, vet);

  mostrarFis(vet, primeiro);
  printf("\n\n");
  mostrarLog(vet, primeiro);
  printf("\n\n");
  }

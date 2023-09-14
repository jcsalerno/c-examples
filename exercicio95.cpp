/*Escreva um programa em C que leia dois vetores de 500 elementos inteiros cada um, além de dois
valores inteiros m e n. Os dois vetores, m e n devem ser passados para uma função na qual cada elemento
de índice entre m e n deve ter seu valor trocado com o valor colocado na mesma posição do outro vetor. A
função deve receber cada vetor através de um ponteiro para o seu primeiro elemento, e não devem ser
usados índices na manipulação.*/

#include <stdio.h>
#define TAM 7

void funcao(int *vet, int *vet2, int m, int n) {
  int a, *fim;
  if (m > n) {
    a = m;
    m = n;
    n = a;
    }
  fim = vet + n;
  for (vet += m, vet2 += m; vet <= fim; vet++, vet2++) {
    a = *vet;
    *vet = *vet2;
    *vet2 = a;
    }
  }

main() {
  int vet[TAM], vet2[TAM];
  int i, j;
  printf("Digite %d elementos para o primeiro vetor: ", TAM);
  for (i = 0; i < TAM; i++) {
    scanf ("%d", &vet[i]);
    }
  printf("Digite %d elementos para o segundo vetor: ", TAM);
  for (i = 0; i < TAM; i++) {
    scanf ("%d", &vet2[i]);
    }

  printf("Digite os indices do intervalo:");
  scanf ("%d", &i);
  scanf ("%d", &j);

  funcao(vet, vet2, i, j);

  printf("Vetores resutantes:\n");
  for (i = 0; i < TAM; i++) {
    printf ("%d  ", vet[i]);
    }
  printf("\n");
  
  for (i = 0; i < TAM; i++) {
    printf ("%d  ", vet2[i]);
    }
  }
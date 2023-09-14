/*Escreva um programa que leia valores para um vetor de 5000 elementos inteiros, e passe esse vetor como parâmetro
para uma função. Na função, cada elemento i do vetor deve ter seu valor substituído pela média aritmética dos valores das
posições i-1, i e i+1 no vetor recebido (os valores da leitura). Nos casos em que as posições i-1 ou i+1 não fizerem parte do
vetor (quando i=0 ou quando i=4999, respectivamente), elas devem ser ignoradas e a média feita entre os valores das duas
posições possíveis. Após o retorno para a função main, o vetor deve ser exibido na tela. */

#include<stdio.h>

#define TAM 7

void funcao(int vet[TAM]) {
  int i, a, b;
  a = vet[0];
  vet[0] = (vet[0] + vet[1]) / 2;
  for (i = 1; i < TAM-1; i++) {
    b = vet[i];
    vet[i] = (a + vet[i] + vet[i+1]) / 3;
    a = b;
    }
  vet[i] = (vet[i] + a) / 2;
  }

main() {
  int vet[TAM];
  int i;
  printf("Digite %d elementos para o vetor: ", TAM);
  for (i = 0; i < TAM; i++) {
    scanf ("%d", &vet[i]);
    }
  funcao(vet);
  printf("Vetor resutante: ");
  for (i = 0; i < TAM; i++) {
    printf ("%d  ", vet[i]);
    }
  }
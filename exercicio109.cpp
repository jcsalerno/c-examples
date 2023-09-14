/*Escrevendo programa em C em texto em um arquivo com a função fputs*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void escrever(char f[]) {
  FILE* file = fopen(f, "w");
  char texto[500];

  if (file) {
    printf("Digite um texto ou uma frase e 1 caracter para finalizar!\n");
    while (scanf(" %499[^\n]", texto) == 1) {
      int c;
      scanf(" %c", &c);
      fputs(texto, file);
      fputc('\n', file);
      if (c == '!') {
        break;
      }
    }
    fclose(file);
  } else {
    printf("\nErro ao abrir arquivo!\n");
  }
}

int main() {
  char nome[] = {"conto.txt"};

  escrever(nome);

  return 0;
}

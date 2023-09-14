/*Escreva um programa que leia um nome de um arquivo de texto e mostre na tela qual linha
do arquivo tem mais caracteres (assuma que as linhas têm no máximo 100 caracteres). O
programa deve mostrar uma mensagem na tela informando qual a linha e quantos
caracteres ela tem. */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_LINE_LEN 100

void find_longest_line(char* input_file) {
  // Abre o arquivo de entrada para leitura
  FILE* fin = fopen(input_file, "r");
  if (fin == NULL) {
    printf("Erro ao abrir o arquivo de entrada");
    return;
  }

  // Encontra a linha com mais caracteres
  char line[MAX_LINE_LEN];
  int longest_line_len = 0;
  int longest_line_num = 0;
  int line_num = 0;
  while (fgets(line, MAX_LINE_LEN, fin) != NULL) {
    int line_len = strlen(line);
    if (line_len > longest_line_len) {
      longest_line_len = line_len;
      longest_line_num = line_num;
    }
    line_num++;
  }

  // Mostra o resultado na tela
  printf("A linha %d tem %d caracteres\n", longest_line_num, longest_line_len);

  // Fecha o arquivo
  fclose(fin);
}
int main(int argc, char* argv[]) {
  if (argc != 2) {
    printf("Usage: %s input_file\n", argv[0]);
    return 1;
  }

  char* input_file = argv[1];
  find_longest_line(input_file);

  return 0;
}

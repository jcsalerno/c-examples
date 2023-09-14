#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_NAME_LEN 50
#define MAX_LINE_LEN 100

typedef struct {
  char name[MAX_NAME_LEN];
  int age;
  float height;
} Person;

int main(int argc, char* argv[]) {
  if (argc != 3) {
    printf("Usage: %s input_file output_file\n", argv[0]);
    return 1;
  }

  char* input_file = argv[1];
  char* output_file = argv[2];

  // Abre o arquivo de entrada para leitura
  FILE* fin = fopen(input_file, "r");
  if (fin == NULL) {
    perror("Erro ao abrir o arquivo de entrada");
    return 1;
  }

  // Abre o arquivo de saída para gravação
  FILE* fout = fopen(output_file, "wb");
  if (fout == NULL) {
    perror("Erro ao abrir o arquivo de saída");
    return 1;
  }

  // Lê as informações do arquivo de entrada e as grava no arquivo de saída
  Person p;
  char line[MAX_LINE_LEN];
  while (fgets(line, MAX_LINE_LEN, fin) != NULL) {
    // Extrai as informações do registro da linha
    sscanf(line, "%s %d %f", p.name, &p.age, &p.height);
    // Grava o registro no arquivo de saída
    fwrite(&p, sizeof(Person), 1, fout);
  }

  // Fecha os arquivos
  fclose(fin);
  fclose(fout);

  return 0;
}

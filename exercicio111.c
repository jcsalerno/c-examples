#include <stdio.h>
#include <string.h>

// Função para pesquisar por uma palavra em um arquivo de texto
int searchWord(FILE *file, char *word) {
char line[1000];
int lineNumber = 0;

// Lê linha a linha do arquivo até chegar ao fim
while (fgets(line, 1000, file) != NULL) {
lineNumber++;

// Verifica se a palavra está presente na linha
if (strstr(line, word) != NULL) {
  return lineNumber;
}
}

// Palavra não encontrada
return 0;
}

int main() {
// Abre o arquivo para leitura
FILE *file = fopen("text.txt", "r");
if (file == NULL) {
printf("Erro ao abrir o arquivo\n");
return 1;
}

// Pesquisa pela palavra "palavra" no arquivo
int lineNumber = searchWord(file, "palavra");
if (lineNumber > 0) {
printf("Palavra encontrada na linha %d\n", lineNumber);
} else {
printf("Palavra não encontrada\n");
}

// Fecha o arquivo
fclose(file);

return 0;
}
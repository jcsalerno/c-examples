#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_LEN 256

typedef struct {
int number;
char start[MAX_LEN];
char end[MAX_LEN];
char text[MAX_LEN];
} Subtitle;

// Função para ler o nome do arquivo de legendas
void read_filename(char *filename) {
printf("Informe o nome do arquivo de legendas: ");
scanf("%s", filename);
}

// Função para ler os valores de segundos e milissegundos
void read_seconds_milliseconds(int *seconds, int *milliseconds) {
printf("Informe os segundos: ");
scanf("%d", seconds);
printf("Informe os milissegundos: ");
scanf("%d", milliseconds);
}

// Função para ler o número da legenda
void read_subtitle_number(int *number) {
printf("Informe o número da legenda: ");
scanf("%d", number);
}

// Função para ler os números das legendas que determinam o intervalo
void read_subtitle_range(int *start, int *end) {
printf("Informe o número da primeira legenda: ");
scanf("%d", start);
printf("Informe o número da última legenda: ");
scanf("%d", end);
}

// Função para adicionar segundos aos marcadores de uma legenda específica
void add_seconds_to_subtitle(Subtitle *subtitle, int seconds, int milliseconds) {
// TODO: Adicionar os segundos e milissegundos aos marcadores da legenda
}
// Função para diminuir segundos de todas as legendas
void subtract_seconds_from_all_subtitles(Subtitle *subtitles, int size, int seconds, int milliseconds) {
for (int i = 0; i < size; i++) {
// TODO: Diminuir os segundos e milissegundos dos marcadores da legenda
}
}

// Função para eliminar um conjunto de legendas
void delete_subtitles(Subtitle *subtitles, int *size, int start, int end) {
// TODO: Eliminar as legendas do intervalo [start, end] e renumerar as legendas restantes
}

int main(void) {
char filename[MAX_LEN];
Subtitle *subtitles = NULL;
int size = 0;
int choice;

do {
printf("\nEscolha uma das seguintes opções:\n");
printf("1) Informar o nome do arquivo de legendas\n");
printf("2) Acrescentar segundos a uma legenda específica\n");
printf("3) Diminuir segundos de todas as legendas\n");
printf("4) Eliminar um conjunto de legendas\n");
printf("0) Sair\n");
printf("Sua opção: ");
scanf("%d", &choice);
  switch (choice) {
  case 1:
    read_filename(filename);
    // TODO: Carregar o arquivo de legendas para o vetor de legendas
    break;
  case 2:
    if (subtitles == NULL) {
      printf("O arquivo de legendas ainda não foi informado\n");
      break;
    }
    int seconds, milliseconds, number;
    read_seconds_milliseconds(&seconds, &milliseconds);
    read_subtitle_number(&number);
    // TODO: Verificar se o número da legenda é válido
    add_seconds_to_subtitle(&subtitles[number-1], seconds, milliseconds);
    break;
  case 3:
    if (subtitles == NULL) {
      printf("O arquivo de legendas ainda não foi informado\n");
      break;
    }
    read_seconds_milliseconds(&seconds, &milliseconds);
    subtract_seconds_from_all_subtitles(subtitles, size, seconds, milliseconds);
    break;
  case 4:
    if (subtitles == NULL) {
      printf("O arquivo de legendas ainda não foi informado\n");
      break;
    }
    int start, end;
    read_subtitle_range(&start, &end);
    // TODO: Verificar se o intervalo é válido
    delete_subtitles(subtitles, &size, start, end);
    break;
  case 0:
    printf("Saindo...\n");
    break;
  default:
    printf("Opção inválida\n");
    break;
}
} while (choice != 0);

// Liberar a memória alocada para o vetor de legendas
free(subtitles);

return 0;
}
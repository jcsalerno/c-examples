/*Escreva um programa que leia uma string e um valor inteiro N, e passe ambos (pelo menos) para uma função em que
é feita a verificação de quais letras se repetem na string exatamente N vezes. A função deve receber a string através de um
ponteiro para o primeiro elemento. Não devem ser usados índices na manipulação da string. Após o retorno, na função main,
as letras que ocorrem N vezes devem ser exibidas na tela. Por exemplo, lida a string “borboleta” e o valor 2 para N, devem
ser exibidas as letras ‘b’ e ‘o’, ou lida a string “paralelepípedo” e o valor 3 para N, devem ser exibidas as letras ‘p’ e ‘e’.  */

#include<stdio.h>

void funcao(char *ini, int n, char *letras) {
  char *s, *c;
  int cont;
  for (s = ini; *s; s++) {
    for (c = ini; *c != *s; c++);
    if (c == s) {
      cont = 1;
      for (c = s+1; *c; c++) {
        if (*s == *c)
          cont++;
        }
      if (cont == n) {
        *letras = *s;
        letras++;
        }
      }
    }
  *letras = '\0';
  }

main() {
  int n;
  char str[30];
  char result[30];
  printf("Digite a string: ");
  gets(str);
  printf("Digite o valor inteiro: ");
  scanf("%d", &n);
  funcao(str, n, result);
  printf("letras que se repetem %d vezes: ", n);
  for (n = 0; result[n]; n++)
    printf("%c ", result[n]);
  }
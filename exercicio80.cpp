#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

void exibirLetras(char palavra[],int num){
  int i,total;

  total = strlen(palavra);  
  for (i=0; i<total; i++){
    printf(" %c \n",*palavra);
    palavra++;
    }
  
  
}

int main() {
  int i=0;
  char palavra[25],*p;
    printf("Digite uma palavra:");
    fgets(palavra,25,stdin);
    p = palavra; 
  
    exibirLetras(p,10);
  return 0;
}
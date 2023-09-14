/*Desenvolva um algoritmo na linguagem C que leia um número inteiro e depois realize as seguintes operações: Apresente todos os números de 0 até o número digitado, em ordem crescente. Apresente todos os números do número digitado até zero, em ordem descrente.*/
#include <stdio.h>

int main(){
  int numero, i;
  printf("Digite um número\n", numero);
  scanf("%d", &numero);

  for(i = 0; i <= numero; i++){
    printf("Crescente: %d\n", i);
  }
for(i = numero; i >= 0; i--){
    printf("Decrescente: %d\n", i);
    
}
    return 0;
}
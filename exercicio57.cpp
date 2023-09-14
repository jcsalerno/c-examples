/*Escreva um programa que gere um valor inteiro aleatório, identificado por m, entre 100 e
1000. A seguir, deve ser gerado um segundo valor, também de forma aleatória e identificado
por n, entre -m/2 e +m/2. O programa deve ser feito de modo que a função para geração de
números aleatórios seja chamada apenas duas vezes, uma para gerar m e outra para gerar n.
Ao final, os valores de m e n devem ser exibidos na tela. */

#include <stdio.h>
#include <time.h>
#include <stdlib.h> 

int geraNumeros (int m){
  int numero;
  if(m == 0){
    for (numero = 100; numero < 1000; numero++);
    numero = rand() % 999 + 1 ;
     printf("%d \n", numero);
    
  } else{
    numero = -m/2 + (rand() % (m/2));
    printf("%d \n", numero);
  }

  return numero;
    
}

int main(){
  
    int m, n;

    srand((unsigned)time(NULL));

    m = geraNumeros(0);
    n = geraNumeros(m);
    

  printf("Os números gerados foram: %d %d\n", m, n);
    return 0;
}
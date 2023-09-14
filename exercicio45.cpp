/*Fazer um programa para ler 5 valores e, em seguida, mostrar a posição do vetor onde estão o maior e o menor valor.*/

#include<stdio.h>
int main(){

    int valores[5];
    int maior, menor, i;

    for(i=0; i<5; i++){
        printf("[%d] = ", i);
        scanf("%d", &valores[i]);
    }
 
  maior = 0;
  menor = 0;
  
  for(i = 0; i < 5; i++){
    if(valores[i] > valores[maior]){
        maior = i;
    }
  }
if(valores[i] < valores[menor]){
    menor = i;
}

printf("Posição do maior: %d\n", maior);
printf("Posição do menor: %d\n", menor);


    return 0;
}
/*Faça um algoritmo que simule uma conta bancária. Primeiramente deve-se ler o saldo em conta, posteriormente apresente o seguinte menu:
1 - Sacar
2 - Depositar
3 - Saldo
4 - Sair
*/
#include <stdio.h>

int main(){
    float saldo, sacar, valor, depositar;
    int opcao;
  
  printf("Digite seu saldo");
  scanf("%f",&saldo);

  printf("MENU DE OPÇÕES\n");
  printf("1- Sacar\n");
  printf("2- Depositar\n");
  printf("3- Saldo\n");
  printf("4- Sair\n");
  scanf("%i",&opcao);
  

  switch (opcao){
  case 1:
    printf("O valor que deseja sacar\n");
    scanf("%f", &valor);
    saldo = saldo - valor;

    if(saldo<=sacar){
    printf("Você não tem saldo sufuciente\n");
  }else{ 
    saldo = saldo - valor;
    
  }
    break;

  case 2:
  printf("O valor que deseja depositar");
  scanf("%f", &valor);
    saldo = saldo + valor;
    break;

  case 3:
  printf("Voce tem um saldo%f\n", saldo);  
  break;

    return 0;
}}



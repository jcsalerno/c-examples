/*Escreva um programa no qual seja chamada uma função que receba como parâmetro um
ano e retorne 1 se o ano for bissexto, e 0 caso contrário. São bissextos todos os anos não
seculares divisíveis por 4, e os seculares divisíveis por 400.*/

#include <stdio.h>

void CalculaAno(int anos);


int main(){
    int ano;
     

    printf("Digite um ano para saber se ele é bissexto\n");
    scanf("%d", &ano);

    CalculaAno(ano);


    
    return 0;
}

void CalculaAno(int anos){
    if(anos % 4 == 0|| (!(anos % 100) && anos % 400)){
        printf("O ano é Bissexto: 1\n");
            }else{
                printf("Não, o ano não é bissexto: 0\n");
            }
        }
  

/*Divisível por 4. Sendo assim, a divisão é exata com o resto igual a zero;

Não pode ser divisível por 100. Com isso, a divisão não é exata, ou seja, deixa resto diferente de zero;

Pode ser que seja divisível por 400. Caso seja divisível por 400, a divisão deve ser exata, deixando o resto igual a zero.



#include<stdio.h>

int bissexto(int a) {
  return !(a % 4 || (!(a % 100) && a % 400));
  }

main () {
  int ano;
  printf("Digite o ano: ");
  scanf ("%d", &ano);
  if (bissexto(ano))
    printf("Sim, ano bissexto.");
  else
    printf("Nao, ano NAO bissexto.");
  }*/
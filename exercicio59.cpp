/*Elabore um código que leia um inteiro “x” do teclado e defina um ponteiro para essa
variável. Depois, modifique o valor de “x” por meio do ponteiro e mostre na tela o valor de
“x”.*/

#include <stdio.h>
int main(){
    int inteiroX; 
    int *pont = NULL;

    printf("Digite um valor inteiro\n");
    scanf("%d", &inteiroX); 

    printf("O valor do inteiro digitado foi %d\n", inteiroX);

    pont = &inteiroX; 
    
    *pont = 20;
    printf("O valor do inteiro passado pelo ponteiro foi %d\n", *pont);
    return 0;
}
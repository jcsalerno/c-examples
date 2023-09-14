/*Crie um programa que leia uma variável inteira do teclado e defina um ponteiro que aponte
para essa variável. Depois, mostre na tela o valor associado ao endereço guardado pelo
ponteiro e o endereço em si.*/

#include<stdio.h>
#include<stdlib.h>

int main(){
    int x;

    printf("Digite um valor para x\n");
    scanf("%d", &x);

    int *pont = NULL;

    pont = &x;

    printf("x que foi o número associado %d\n", *pont);
    printf("o x guardado na memória foi %d\n", pont);

    return 0;

}
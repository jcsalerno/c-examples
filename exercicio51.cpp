/*Escreva um programa que leia um número inteiro e passe o número para uma função em
que é calculado o valor do seu fatorial. O resultado deve ser mostrado na função main*/

#include <stdio.h>

int fat,num;

int fatorial (int num){
    int fatorial;
    for(fatorial = 1; num > 1; num = num - 1){
        fatorial = fatorial * num;
    }
    return fatorial;
}

int main()
{
    printf("Digite um número \n");
    scanf("%d",&num);
    
    fat = fatorial (num);
    printf("\n%d",fat);
    return 0;
}
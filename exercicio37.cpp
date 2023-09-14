/*Fazer um algoritmo que leia diversos números e mostre quantas vezes o número 10 foi digitado. O laço de repetição deve parar quando o usuário digitar 0.*/

#include <stdio.h>
int main(){
    int diversosN, qtdDez = 0;

    while (qtdDez!=0){
        printf("Digite qualquer número");
        scanf("%d" , &diversosN);
        if(diversosN == 10) {
            qtdDez++;
        }
    printf("Quantidade de vezes o 10 digitado foi: %d",qtdDez);

    }
    
    return 0;
}
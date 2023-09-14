/*Escrever um programa que chama uma função que retorna a soma dos número inteiros que
existem entre os números n1 e n2 (inclusive ambos) passados como parâmetros. A função
deve funcionar inclusive se o valor de n2 for menor que n1. Ler n1 e n2 na função main e
retornar para a main o valor resultante.*/
#include<stdio.h>
int CalculaNum (int primeiro, int segundo){
    int inteiro1;
    return (primeiro + segundo) * (segundo - primeiro + 1) /2;
}
int main(){
    int primeiro, segundo, resultado;

    printf("Digite um número inteiro\n");
    scanf ("%d", &primeiro); 

    printf("Digite outro número inteiro\n");
    scanf("%d", &segundo);

    resultado = CalculaNum (primeiro, segundo);
    

    printf("O valor resultado entre os dois valores são:%.2d", resultado);


    return 0;
}




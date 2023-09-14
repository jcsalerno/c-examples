/*Escreva um programa que leia uma string e chame uma função, passando a string como
parâmetro para calcular o seu tamanho (número de letras). O valor calculado deve ser
retornado para a função main, e então exibido na tela.*/

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int retornaS (char str[]){
    int tam = 0;
    while (str[tam]!='\0')
    {
        tam++;
    }
    return tam;
}
main(){
    char vet[20];

    printf("Digite uma palavra\n");
    fgets(vet, 20, stdin);
   

    printf("Aqui sai da main %d\n", strlen(vet));

    printf("Aqui é da function %d\n", retornaS(vet));

}
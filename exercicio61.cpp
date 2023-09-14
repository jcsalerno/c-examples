/*Crie um ponteiro do tipo char e leia-o do teclado utilizando scanf e um identificador de
string. Em seguida, faça um laço for para imprimir a string lida do teclado.*/

#include <stdio.h>
#include <stdlib.h>
int main(){
    char *P1;
    int i;

    scanf("%s", P1);

    for(i=0; P1[i]!='\0'; i++){
        printf("%c", P1[i]);
    }





    return 0;
}
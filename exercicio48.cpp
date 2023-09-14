/**/

#include <stdio.h>
void positivo();
void negativo();

main(){
    int dado;

    printf("Digite um valor");
    scanf("%d", &dado);

    if(dado > 0){
    positivo();}
    else if(dado < 0){
        negativo();
    }
    return 0;
}

void positivo(){
    printf("VALOR POSITIVO\n");
}

void negativo(){
    printf("VALOR NEGATIVO\n");
}
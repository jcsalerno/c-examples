#include <stdio.h>

void verificacao(int dado);

int main(){
    int dado; 


    printf("Digite um número para saber se ele par ou ímpar");
    scanf("%d", &dado);

    verificacao(dado);
    
    return 0;
}

void verificacao(int dado){
    if(dado % 2 == 0){
        printf("Dado: par\n");
    }else{
        printf("Dado: impar\n");
    }
    
}
    
/*Escreva um programa que leia uma string e chame uma função, passando a string como
parâmetro para calcular o seu tamanho (número de letras). O valor calculado deve ser
retornado para a função main, e então exibido na tela.*/ 


#include <stdio.h>
#include <string.h>
int CalculaLetras (char qtdLetras[]){
    int caracteres = 0;
    while (qtdLetras[caracteres]!= '\0')
    {
        ++caracteres;
    }      
    return caracteres; 
}
main(){
    int qtd;
    char letras[100];

    printf("Este programa vai calcular o números de letras\n");

    printf("Digite sua palavra:\n");
    scanf("%s", &letras);

    qtd = CalculaLetras(letras);

    printf("Sua palavra tem: %d letras", qtd);
    return 0;
}
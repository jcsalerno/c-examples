/*Função em C abrindo e fechando um arquivo*/

#include <stdio.h>
#include <stdlib.h>

void escrever (char f[]){
    FILE *file = fopen(f, "w");
    char letra;

    if(file){
        printf("\nDigite um texto e aperte ENTER para ao finalizar");
        scanf("%c", &letra);
        while (letra !='\n')
        {
            fputc(letra, file);
            scanf("%c", &letra);
        }
        fclose(file);
        
    }
    else printf("\n\nERRO AO ABRIR O ARQUIVO!\n");
}
void ler (char f[]){
    FILE *file = fopen(f, "r");
    char letra;
    if(file){
        printf("\n\tTexto lido do arquivo");
        while (!feof(file))
        {
            letra = fgetc(file);
            printf("%c",letra);
        }
        fclose(file);
        
    } else printf("\nERRO AO ABRIR O ARQUIVO!\n");

}

int main(){
    char nome[] = {"conto.txt"};

    escrever(nome);
    ler(nome);
    
    return 0;
}
/*Como ler em arquivo texto com a função fgetc e fputc*/

#include <stdio.h>
#include <stdlib.h>

int main(){
    FILE *file;
    char letra;

    file = fopen ("conto.txt", "w+");
    if(file){
        printf("\n Digite um texto e pressione ENTER ao finalizar!");
        scanf("%c", &letra);
        while (letra !='\n')
        {
            fputc (letra,file);
            scanf("%c", &letra);
        }
        rewind (file);
        
        printf("\n\t Texto lido do arquivo:\n");
        while (!feof(file))
        {
            letra=fgetc(file);
            printf("%c", letra);
        }
        fclose(file);
    }
        else
        printf("\n\t --> ERRO AO ABRIR O ARQUIVO!\n");
        
    
    return 0;
}
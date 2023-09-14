#include <stdio.h>
#include <string.h>

int existe(char *str1, char *str2, int id){
    int i, j=0;

    for(i = id; i < strlen(str1); i++){
        if(str1[i] == str2[j])
        j++;
        else
        j = 0;
        if(j == strlen(str2))
        return i;
    }
    return -1;
}


int main(){
    char str1[]= "Quem ama, ama mto";
    char str2[] ="ama";
    int indice = 0;
    int quantidade = 0;

    /*printf("Digite sua frase\n", str1);
    getw(str1);
    fflush(stdin);
    printf("Digite a palavra\n", str2);
    scanf("%s", &str2); 

    printf("\nRepiticao \n", existe, (str1, str2, indice));*/

    do{
        indice = existe (str1, str2, indice);
        printf("retorno\n"), indice;
        if(indice != -1)
        quantidade++;
    }while (indice != -1);
    {
       printf("\nQuantidade: %d\n", quantidade);
    }
    
    return 0;
}
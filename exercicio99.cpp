#include <stdio.h>
#include <string.h>

void eliminarRepetidos(char s1[], char s2[]){
    int i, tam = strlen(s1);
    int tamS2=0;

    for(i=0; i < tam; i++){
        if(strchr(s2,s1[i])==NULL){
            s2[tamS2] = s1[i];
            tamS2++;
            s2[tamS2]='\0';
        }
    }
}
int ocorrencias(char str[], char letras[]){
    int i, quant = 0, tam=strlen(str);
    
    for(i = 0; i< tam; i++){
        if(letras == str[i])
        quant++;
    }
     return quant;
}

int main(){
    char str1[100]={"Abacate"};
    char str2[100] = {"\0"};
    char str3[100] = {"Vamos aprender a programar"}; 
    int tam, i, total = 0, resultado;

    printf("Digite uma string:\n");
    gets(str1);
    fflush(stdin);

    printf("Digite para saber as letras em comum\n");
    scanf("%s", &str2);

    eliminarRepetidos(str1, str2);
    printf("str2 %s\n", str2);
    tam = strlen(str2);

    for(i=0; i < tam; i++){
        resultado = ocorrencias(str3, str2[i]);
        printf("%c\t%d\n", str2[i],resultado);
        if(resultado !=0)
        total++;
    }
    printf("\nTotal: %d\n", total);

    return 0; 

}
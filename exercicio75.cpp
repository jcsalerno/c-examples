#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

/*procedimento que trasnforma maiusculo e minusculo*/

void maiusculo(char s1[], char s2[]){
    int i = 0;
    while (s1[i] != '\0')
    {
    s2[i] = toupper (s1[i]);
    i++;
    }
    s2[i] = '\0';
}

void minusculo(char s1[], char s2[]){
    int i = 0;
    while (s1[i] != '\0')
    {
    s2[i] = tolower (s1[i]);
    i++;
    }
    s2[i] = '\0';
}
int main(){
    char str1 [100];
    char str2 [100]; 

    printf("Digite uma frase %s \n", str1);
    scanf("%d", &str1);
    fgets(str1, 100, stdin);
    
    
    
    maiusculo(str1, str2);
    printf("a frase em MAIUSCULO: %s \n", str2); 
    
    minusculo(str1, str2);
    printf("a frase em MINUSCULO: %s \n", str2);
    
    return 0;
}
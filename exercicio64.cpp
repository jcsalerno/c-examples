/*Escreva um programa que chame uma função onde uma string recebe como conteúdo as 26 letras do
alfabeto, em ordem. A string deve ser exibida na tela após o retorno para a função main, e apresentar o
conteúdo “ABCDEFGHIJKLMNOPQRSTUVWXYZ”. A manipulação na função deve ser feita através de
ponteiros, sendo evitado o uso de índices, e a string deve ser mostrada após o retorno para a função main.*/

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void vetor(){ 

    char alfabeto[27]={"abcdefghijklmnopqrstuvwxyz"};
    char *p = &alfabeto[27];
    /*printf("Aqui e na function: %s\n", alfabeto);*/ 
} 
main(void){
   /*char chamaAlfabeto[27]="aeiou"; */ 

        vetor();
        /*printf("Aqui é na main: %s\n",  chamaAlfabeto);*/ 
        

        
        /*printf("Chamei aqui na main o pont da funcao: %s\n", (vetor));*/

       
   
    /*return 0;*/
}

/*while(*v<sizeof(v)){
        v++;
    }
    
    char alfabeto[26] = {'A', 'B', 'C', 'D','E','F','G','H','I','J','K','L','M','N','O','P','Q','R','S','T','U','V','W','X','Y','Z'};

  char *p;
  p = alfabeto[26];
    printf("%s \n", p);
    
}  
    
    */
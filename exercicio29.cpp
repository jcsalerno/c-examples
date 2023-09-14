/*Faça um algoritmo para controle de ar condicionado. Se a temperatura for maior que 30 graus: ligar ar condicionado no 21. Se for menor que 10 graus ligar no 28 graus. Senão, não ligar o ar condicionado
*/

#include <stdio.h>
int main(){
    float temperatura; 

    printf("Digite a temperatura atual");
    scanf("%f", &temperatura);

    if(temperatura > 30){
        printf("Ligar o ar condicionado no 21");
    }
    else if(temperatura < 10){
        printf ("Ligar o ar no 28 graus");
    }
    else{
        printf("Não ligar o Ar \n");
    }

    return 0;
}
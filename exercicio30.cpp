/*Faça um algoritmo que leia dois salários e apresente quais dos dois é maior.*/

#include <stdio.h>
int main(){
    float salario1, salario2;

    printf("Digite o primeiro salário");
    scanf ("%f", &salario1);

    printf("Digite o segundo salário");
    scanf ("%f", &salario2);

    if(salario1 > salario2){
    printf("O salário mais alto é primeiro \n");
    }
    else if (salario2 > salario1){
        printf("O salario mais alto é o segundo \n");
    }
    else{
        printf("OS salários são iguais");
    }


 return 0;   
}
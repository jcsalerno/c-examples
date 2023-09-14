/*Escrever um programa que lê um valor que representa a medida, em metros, da aresta de
um cubo, e chama uma função para calcular o volume do cubo e outra para calcular o
perímetro de cada um dos seus lados.*/ 

#include <stdio.h>

float CalculaVolume(float aresta){
    float  volume;
    volume = (aresta * aresta * aresta);
    return volume; 
}
float CalculaPerimetro(float perimetro){
    float  lado;
    lado = perimetro + perimetro + perimetro;
    return  lado;
}
main(){
    float aresta, perimetro, dentro, total;

    printf("Este programa calcula a aresta de um cubo e o perímetro dele.\n");
    
    printf("Digite a aresta do cubo\n");
    scanf("%f", &aresta); 

    printf("Digite a medida do cubo\n");
    scanf("%f", &perimetro);

    dentro = CalculaVolume(aresta);
    

    printf("A aresta do cubo em metros são: %.2f\n", dentro);

    total = CalculaPerimetro(perimetro);

    printf("O perimetro do cubo em metros são: %.2f\n", total);

    return 0;
}
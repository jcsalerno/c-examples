#include <stdio.h>

float CalculaMedia(float nota1, float nota2){
    float media;
    media = (nota1 + nota2) / 2;
    return media;
}

main(){
     
    float nota1, nota2, mediafinal; 

    printf("Digite a primeira nota");
    scanf("%f", &nota1);

    printf("Digite a segunda nota");
    scanf("%f", &nota2); 

    mediafinal = CalculaMedia(nota1,nota2);
    
    printf("A média final do aluno foi: %.2f", mediafinal);

    return 0;
}
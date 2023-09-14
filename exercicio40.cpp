#include <stdio.h>
int main(){
    float nota, total, resultado;
    int cont;

    
    
    for(cont = 1 ; cont <=4; cont++){
        printf("Digite as notas\n", nota);
        scanf("%f", &nota);
    }
    resultado = (nota  * 4 ) / 4;
    printf ("A média do aluno foi:%.2f", resultado);



    return 0;
}
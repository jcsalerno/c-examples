#include <stdio.h>

int main(){
    char sexo;
    float peso;

    printf("Digite seu SEXO (M-F)");
    scanf ("%c", &sexo); 

    printf ("Digte seu peso");
    scanf ("%f", &peso);

    switch (sexo){
    case 'M': 
    if(peso <= 60){
    printf("Você faz parte da categoria masculina ligeiro\n");
    }else if (peso <=63){
        printf("Você faz parte da categoria masculina meio leve\n");
        }else if (peso <= 73){
            printf("Você faz parte da categoria masculina leve\n");}
        break;
    
    case 'F': 
    if(peso <= 48){
    printf("Você faz parte da categoria ligeiro");}
    else if (peso <=52){
        printf("Categoria meio leve");
    }else if(peso <=57){
        printf("Categoria leve");
    }
  
        break;   

        

    

    default:
        printf("Você não faz parte de nenhuma categoria");
    }
    return 0;

}
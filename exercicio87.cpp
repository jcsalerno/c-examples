#include <stdio.h>

void calculaMedia(){
    float media[3] = {0}, valorLido;
    int i;
    

    for(i=0; i < 5; i++){
        printf("Infome o valor: ");
        scanf("%f", &valorLido);

        media[0] += valorLido;
    }

    for(i=0; i < 5; i++){
        printf("Infome o valor: ");
        scanf("%f", &valorLido);

        media[1] += valorLido;
    }

    for(i=0; i < 5; i++){
        printf("Infome o valor: ");
        scanf("%f", &valorLido);

        media[2] += valorLido;
    }
    //for(i<0; i< 5; i++)
    printf("A média 1 é: %2f\n", media[0]/5);
    printf("A média 2 é: %2f\n", media[1]/5);
    printf("A média 2 é: %2f\n", media[2]/5);
}

int main(){
    calculaMedia();
    return 0;
}
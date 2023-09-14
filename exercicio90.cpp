#include <stdio.h>

int soma(int v [], int tam){
    if(tam == 0)
    return 0;
     else 
    return v[tam-1] + soma(v, tam -1); 

}



int main(){
    int vet[5];
    int i; 
    //int vetores[10];

    

    for(i = 0; i < 5; i++){
    printf("Digite núemros para serem somados\n", vet);
    scanf("%d", &vet[i]);} 

    /*for(i = 0; i < 10; i++){
    printf("Digite núemros para serem somados\n", vetores);
    scanf("%d", &vetores[i]);}*/

    for(i = 0; i < 5; i++){
    printf("Soma %d:\n", soma(vet,2/2)); 
    }
    
    //+soma(vetores,10));


    return 0;
}
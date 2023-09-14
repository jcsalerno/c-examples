/*faça um vetor para ler a nota de 3 alunos. após ler as notas.
imprima as notas e mostre o resultado das médias
*/

#include <stdio.h>
int main(){
  float media = 0, notas[3];
  int ind;

  for(ind = 0; ind < 3; ind++){
    printf("Digite a nota: %d", ind);
    scanf("%f", &notas[ind]);
  }
  printf("Notas:\n");
  for(ind = 0; ind < 3; ind++){
    printf("%f\n", notas[ind]);
    media = media + notas[ind];
  }
media = media / 3;
 printf("A média do aluno foi: %f", media);

    return 0;
}


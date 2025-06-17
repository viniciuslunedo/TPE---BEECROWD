#include <stdio.h>
int main(){
  int t, i, x;

  printf("Digite a quantidade de testes:\n");
  scanf("%d", &t);

  for(i=0; i<t; i++){
    printf("Digite o valor #%d:\n", i+1);
    scanf("%d", &x);

    if(x == 0) {
      printf("Valor %d é zero: NULL\n", x);
    } else {
      if(x % 2 == 0)
        printf("Valor %d é PAR ", x);
      else
        printf("Valor %d é IMPAR ", x);

      if(x > 0)
        printf("e POSITIVO\n");
      else
        printf("e NEGATIVO\n");
    }
  }
  return 0;
}

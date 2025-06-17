#include <stdio.h>
int main(){
  int t, i;
  int v[10];

  scanf("%d", &t);
  v[0] = t;

  for(i=1; i<10; i++){
    v[i] = v[i-1]*2;
  }

  for(i=0; i<10; i++){
    printf("N[%d] = %d\n", i, v[i]);
  }

  return 0;
}

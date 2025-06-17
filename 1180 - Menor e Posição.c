#include <stdio.h>
int main() {
  int n, i, mn, pos;
  scanf("%d", &n);
  int v[n];
  for(i=0;i<n;i++) scanf("%d", &v[i]);
  mn = v[0];
  pos = 0;
  for(i=1;i<n;i++)
    if(v[i]<mn) {
      mn = v[i];
      pos = i;
    }
  printf("Menor valor: %d\n", mn);
  printf("Posicao: %d\n", pos);
  return 0;
}

#include <stdio.h>
int main() {
  int t, i, v[1000];
  scanf("%d", &t);
  for(i=0;i<1000;i++) v[i] = i % t;
  for(i=0;i<1000;i++) printf("N[%d] = %d\n", i, v[i]);
  return 0;
}

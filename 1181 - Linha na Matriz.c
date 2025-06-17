#include <stdio.h>
int main() {
  int l, i;
  char op;
  double m[12][12], res=0;

  scanf("%d", &l);
  scanf(" %c", &op);
  for(i=0; i<144; i++)
    scanf("%lf", &m[i/12][i%12]);

  for(i=0; i<12; i++)
    res += m[l][i];

  if(op == 'M')
    res /= 12;

  printf("%.1lf\n", res);
  return 0;
}

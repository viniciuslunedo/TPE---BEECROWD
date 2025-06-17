#include <stdio.h>
int main() {
  int l, i, c = 12;
  char op;
  double m[12][12], res = 0;

  scanf("%d", &l);
  scanf(" %c", &op);

  for(i = 0; i < 12; i++)
    for(int j = 0; j < 12; j++)
      scanf("%lf", &m[i][j]);

  for(i = 0; i < 12; i++)
    res += m[i][l];

  if(op == 'M')
    res /= c;

  printf("%.1lf\n", res);
  return 0;
}

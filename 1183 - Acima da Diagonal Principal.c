#include <stdio.h>
int main() {
  char op;
  double m[12][12], res = 0;
  int cnt = 0;

  scanf(" %c", &op);

  for(int i = 0; i < 12; i++)
    for(int j = 0; j < 12; j++)
      scanf("%lf", &m[i][j]);

  for(int i = 0; i < 12; i++)
    for(int j = i + 1; j < 12; j++) {
      res += m[i][j];
      cnt++;
    }

  if(op == 'M')
    res /= cnt;

  printf("%.1lf\n", res);

  return 0;
}

#include <stdio.h>
int main() {
  int n, i;
  unsigned long long f=1;

  scanf("%d", &n);

  for(i=2; i<=n; i++) f *= i;

  printf("%llu\n", f);

  return 0;
}

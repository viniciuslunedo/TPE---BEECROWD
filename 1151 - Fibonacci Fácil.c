#include <stdio.h>
int main() {
  int n, i;
  unsigned long f0 = 0, f1 = 1, fn;

  scanf("%d", &n);

  for (i = 0; i < n; i++) {
    if (i == 0)
      printf("0");
    else if (i == 1)
      printf(" 1");
    else {
      fn = f0 + f1;
      f0 = f1;
      f1 = fn;
      printf(" %lu", fn);
    }
  }
  printf("\n");
  return 0;
}

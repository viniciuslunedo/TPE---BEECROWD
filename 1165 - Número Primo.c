#include <stdio.h>

int main() {
  int t, x, i, primo;

  scanf("%d", &t);

  while(t--) {
    scanf("%d", &x);
    if(x < 2) {
      printf("%d nao é primo\n", x);
      continue;
    }

    primo = 1;
    for(i = 2; i*i <= x; i++) {
      if(x % i == 0) {
        primo = 0;
        break;
      }
    }

    if(primo)
      printf("%d é primo\n", x);
    else
      printf("%d nao é primo\n", x);
  }
  return 0;
}

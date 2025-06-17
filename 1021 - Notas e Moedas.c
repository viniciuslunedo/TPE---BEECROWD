#include <stdio.h>

int main(){
  double v;
  int n, m;
  int a100, a50, a20, a10, a5, a2;
  int m1, m50, m25, m10, m5, m1c;

  scanf("%lf", &v);

  n = (int)v;
  m = (int)((v - n)*100 + 0.5);

  a100 = n / 100; n %= 100;
  a50 = n / 50; n %= 50;
  a20 = n / 20; n %= 20;
  a10 = n / 10; n %= 10;
  a5 = n / 5; n %= 5;
  a2 = n / 2; n %= 2;

  m1 = n;

  m50 = m / 50; m %= 50;
  m25 = m / 25; m %= 25;
  m10 = m / 10; m %= 10;
  m5 = m / 5; m %= 5;
  m1c = m;

  printf("NOTAS:\n");
  printf("%d nota(s) de R$ 100.00\n", a100);
  printf("%d nota(s) de R$ 50.00\n", a50);
  printf("%d nota(s) de R$ 20.00\n", a20);
  printf("%d nota(s) de R$ 10.00\n", a10);
  printf("%d nota(s) de R$ 5.00\n", a5);
  printf("%d nota(s) de R$ 2.00\n", a2);

  printf("MOEDAS:\n");
  printf("%d moeda(s) de R$ 1.00\n", m1);
  printf("%d moeda(s) de R$ 0.50\n", m50);
  printf("%d moeda(s) de R$ 0.25\n", m25);
  printf("%d moeda(s) de R$ 0.10\n", m10);
  printf("%d moeda(s) de R$ 0.05\n", m5);
  printf("%d moeda(s) de R$ 0.01\n", m1c);

  return 0;
}

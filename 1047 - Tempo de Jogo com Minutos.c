#include <stdio.h>
int main(){
  int hi, hf, mi, mf, hd, md, tmin, th, tm;

  printf("Digite hora e minuto do início (ex: 7 8):\n");
  scanf("%d %d", &hi, &mi);
  printf("Digite hora e minuto do fim (ex: 9 10):\n");
  scanf("%d %d", &hf, &mf);

  tmin = (hf*60 + mf) - (hi*60 + mi);
  if(tmin <= 0) tmin += 24*60;

  th = tmin / 60;
  tm = tmin % 60;

  printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n", th, tm);

  return 0;
}

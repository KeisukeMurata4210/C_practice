# include <stdio.h>

int main(void) {
  int    r;
  double s;

  /*
  whileを使うことで、
  「正しい値が入力されるまで再入力させる」
  処理を行える。
  かつ、do_whileを使うことでDRYにしている。
  */
  do {
    printf("半径？：");
    scanf("%d", &r);
  } while(r < 0);

  s = r * r * 3.14;
  printf("面積は %f です。\n", s);
  return 0;
}
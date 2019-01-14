#include <stdio.h>
/*
変数＝箱、という説明が多いが正確には
「数値を保存しておくためのメモリ領域に名前をつけること」！！

整数型：short < int < long
実数型：float < double
*/
int main(void) {
  int juice = 198;
  int milk  = 138;

  printf("お釣り：%d円\n", (int)(1000 - (juice + milk *2)*1.05));
  return 0;
}
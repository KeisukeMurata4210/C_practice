#include <stdio.h>
/*
変数＝箱、という説明が多いが正確には
「数値を保存しておくためのメモリ領域に名前をつけること」！！

整数型：short < int < long
実数型：float < double
*/
int main(void) {
  double left, right;
  left  = 10;
  right = 3;
  printf("%f\n", left + right);
  printf("%f\n", left - right);
  printf("%f\n", left * right);
  printf("%f\n", left / right);
  

  //型を変換する（キャスト）　整数と実数の計算結果は実数になる b/c 小数部分を消さないため
  printf("%d\n", (int)(360 * 1.08));

  //桁数を揃える

  int a = 10000, b = 500, c = 3;
  printf("Aは %5dです。\n", a);
  printf("Bは %5dです。\n", b);
  printf("Cは %5dです。\n", c);

  printf("Aは %05dです。\n", a);
  printf("Bは %05dです。\n", b);
  printf("Cは %05dです。\n", c);

  //実数の桁数を揃える　小数点と小数の桁数を含めた桁を指定するのに注意！
  double pi = 3.14159;
  printf("%06.2f\n", pi); // %全体の桁数.小数以下の桁数f
  printf("%d\n", 123456);
  return 0;
}
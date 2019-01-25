# include <stdio.h>
# include "sum.h"

int main(void) {
  int value;
  value = sum(50, 100);
  printf("%d\n", value);
  printf("%d\n", Public);// sum.cに実体が定義されているPublic
  return 0;
}
/* 
変数の共有はできるだけしない方がいい
機能ごとに独立させるという、ファイル分割の意味が薄れる。
*/
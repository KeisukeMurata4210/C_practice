# include <stdio.h>

int count; // グローバル変数はデフォルトで0で初期化される。定義されるのは1回だけのため。

int countfunc(void);

int main(void) {

  countfunc();
  count = 10; // 全ての関数で値が共有される
  countfunc();
  countfunc();
  return 0;
}

int countfunc(void) {
  count++;
  printf("%d\n", count);
  return count;
}
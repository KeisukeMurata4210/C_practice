# include <stdio.h>

int count;

int countfunc(void);

int main(void) {
  int count; // グローバル変数と同名のローカル変数を定義すると…

  countfunc();
  count = 10; // 全ての関数で値が共有される
  countfunc();
  countfunc();
  printf("main count：%d\n", count);// ローカル変数が優先される
  return 0;
}

int countfunc(void) {
  count++;
  printf("%d\n", count);//こちらはローカル変数がないため、グローバル変数を参照する
  return 0;
}

// まずローカル変数を探し、なければグローバル変数を探しに行く
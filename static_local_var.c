# include <stdio.h>

int countfunc(void);

int main(void) {

  countfunc();
  countfunc();
  countfunc();
  return 0;
}

int countfunc(void) {
  static int count; // 静的なローカル変数
  count++;
  printf("%d\n", count);
  return count;
}

/*
グローバル変数と同様に
・プログラム終了まで残る
・デフォルトで0で初期化される
*/
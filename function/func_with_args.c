# include <stdio.h>

int sum(int, int);//引数の数も明示する

int main(void) {
  sum(50, 100); // 呼び出し
  return 0;
}

int sum(int min, int max) {
  printf("%d\n", (min + max) * (max - min +1) /2);
  return 0;
}
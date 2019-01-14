# include <stdio.h>

int sum(int, int);//引数の数も明示する

int main(void) {
  int value;
  value = sum(50, 100);
  printf("%d\n", value);
  return 0;
}

int sum(int min, int max) {
  int num;
  num = (min + max) * (max - min +1) /2;
  return num;
}
//戻り値は１つしか返せない！！
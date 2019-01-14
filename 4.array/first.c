# include <stdio.h>

int main(void) {
  /*配列の一つ一つの要素は「変数！！」*/

  int array[100];
  array[9] = 100;
  printf("1:%d\n", array[9]);
  array[9]++;
  printf("2:%d\n", array[9]);
  return 0;
}
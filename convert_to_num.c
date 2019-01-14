# include <stdio.h>

int main(void) {
  char c  = '8';
  int num = c -'0';
  int c2  = 'A' - '0';
  printf("%d\n", num);//数値に変換
  printf("%d\n", c2);
  return 0;
}
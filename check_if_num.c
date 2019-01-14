# include <stdio.h>

int main(void) {
  char c = 'A';
  int num;
  if (c >= '0' && c <= '9')
    num = c -'0';
  else
    num = 0;
  printf("%d\n", num);
  return 0;
}
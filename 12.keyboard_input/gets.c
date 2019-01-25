# include <stdio.h>

int main(void) {
  char str[32];
  gets(str);
  puts(str);//文字列が表示され、最後は自動で改行される
  return 0;
}
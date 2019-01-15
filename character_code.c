# include <stdio.h>
# include <ctype.h>//ctype.hをインクルード


int main(void) {
  /*
  文字コードに照らし合わせて、
  数値かどうか、アルファベットかどうか、
  などを調べる機能が関数化されている
  */

  char c = 'A';
  int num;
  if (isdigit(c)) {
    num = c -'0';
  } else {
    num = 0;
  }
  printf("%d\n", num);
  return 0;
}
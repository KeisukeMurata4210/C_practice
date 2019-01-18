# include <stdio.h>

int main(void) {
  char c = 'A' + 9;
  printf("%c\n", c);
  return 0;
}
/*
文字はメモリ上では数値として保存される。
文字コードとは、それらの数値と文字との対応表。
→文字コード上の並び順で計算ができる。
*/
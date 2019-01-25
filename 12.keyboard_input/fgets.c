# include <stdio.h>

int main(void) {
  char str[32];
  fgets(str, sizeof(str), stdin); // 要素数を越えると入力を打ち切る
  puts(str);
  return 0;
}
/* 
stdin部分はファイルポインタを指定する。
本来はファイルから文字列を読み込む関数だが、
C言語は全ての周辺機器をファイルとして扱える。
stdinはキーボードに割り当てられたファイルポインタ
*/
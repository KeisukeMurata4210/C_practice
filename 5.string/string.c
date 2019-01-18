# include <stdio.h>

int main(void) {
  char str[6] = {'M','A','R','I','O','\0'};
  printf("%s\n", str); // 文字列は「%s」

  // 簡単に書くとこう
  char str2[] = "MARIA"; // 配列であるので、この代入は初期化時にしか使えない。
  printf("%s\n", str2);
  return 0;
}
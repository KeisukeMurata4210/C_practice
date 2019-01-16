# include <stdio.h>
# include <string.h>

int main(void) {
  char str[10], str2[10];
  strcpy(str, "MARIO"); // 文字列のコピー
  printf("%s\n", str);

  strncpy(str2, str, 3); // 第一引数に第二引数の3文字目までコピー
  str2[3] = '\0'; //EOSを入れないと永遠に出力され続ける
  printf("%s\n", str2);
  return 0;
}
# include <stdio.h>

int main(void) {
  char str[256] = "DRAGON";
  scanf("%s", &str[6]);// 6ばんめ（末尾、EOSの位置）に代入
  printf("%s\n", str);
  return 0;
}
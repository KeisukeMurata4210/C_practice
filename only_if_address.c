# include <stdio.h>

int main(void) {
  char str[256];
  scanf("%s", &str[0]);// 0ばんめの要素
  printf("%s\n", str);
  return 0;
}
/* 配列名でなくてもいい。「アドレス」であればそれでいい */
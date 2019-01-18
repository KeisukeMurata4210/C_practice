# include <stdio.h>

int main(void) {
  char str[32];
  scanf("%31s", str); // 32文字以上は切り捨てられる　(EOSを書くからひとつ少ない)
  printf("%s\n", str);
  return 0;
}

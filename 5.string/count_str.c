# include <stdio.h>

int main(void) {
  int i;
  char str[256];

  scanf("%s", str);

  for (i = 0; str[i] != '\0'; i++); // iの数を増やしているだけ！　こういう使い方もある

  printf("%d\n", i);
  return 0;
}
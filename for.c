# include <stdio.h>

int main(void) {
  int i, n;
  for (i = 1; i <= 10; i++) {
    printf("メッセージ%02d\n", i);
  }

  for (n = 1; n > 0; n++) {
    printf("無限ループ\n");
    if (n == 30) break;
  }
  return 0;
}
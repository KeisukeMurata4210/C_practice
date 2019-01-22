# include <stdio.h>

int main(void) {
  int *p, i;
  p = &i; // ポインタ変数モード
  printf("p：%p\n", p);
  printf("&i：%p\n", &i);
  return 0;
}
# include <stdio.h>

int main(void) {
  int i;
  FILE *file;
  file = fopen("test.txt", "r");
  fscanf(file, "%d", &i);// 本の説明とは違い文字列は無視されず、変な値が出力される
  fclose(file);
  printf("%d\n", i);
  return 0;
}
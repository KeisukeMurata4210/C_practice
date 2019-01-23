# include <stdio.h>

int main(void) {
  FILE *file;
  int i = 100;
  file = fopen("test.txt", "w");
  fprintf(file, "Hello, world\n");
  fprintf(file, "%d\n", i);//変数の書き込みもできる
  fclose(file);
  return 0;
}
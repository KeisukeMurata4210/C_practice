# include <stdio.h>

int main(void) {
  FILE *file;
  file = fopen("test.txt", "w");
  fclose(file); //FILE型のポインタ変数を指定
  return 0;
}
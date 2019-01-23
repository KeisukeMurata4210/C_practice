# include <stdio.h>

int main(void) {
  int buf[] = {10, 100, 1000, 10000};
  FILE *file;
  file = fopen("test.dat", "wb");
  fwrite(buf, sizeof(buf), 1, file);// バイナリファイルはfwrite関数で書き込み
  fclose(file);
  return 0;
}
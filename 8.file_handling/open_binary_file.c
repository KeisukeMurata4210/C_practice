# include <stdio.h>

int main(void) {
  int buf = 100;
  FILE *file;
  file = fopen("test.dat", "wb");//バイナリファイルを開くにはモードにbをつける
  fwrite(&buf, sizeof(buf), 1, file); // 書き込む変数のアドレス、1項目のサイズ、項目数、ファイルポインタ
  fclose(file);
  return 0;
}
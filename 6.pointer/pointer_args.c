# include <stdio.h>

void func(int *pvalue);

int main(void) {
  int value = 10;
  printf("&value:%p\n", &value);
  func(&value); // アドレスを渡す
  printf("value:%d\n", value);
  return 0;
}

void func(int *pvalue) {
  printf("pvalue:%p\n", pvalue);//同じアドレス、つまり同じメモリーを参照する
  *pvalue = 100; //通常変数モードで代入
  return;
}
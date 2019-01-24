# include <stdio.h>
# define PRINT_TEMP printf("temp: %d\n", temp);
# define PRINTM(X) printf("%d\n", X)

int main(void) {
  int temp = 100, a = 2000, b = 3000;
  PRINT_TEMP;//define　の関数を呼び出す
  PRINTM(a);//引数を伴った関数も定義できる
  PRINTM(b);
  return 0;
}
/* 
この機能がマクロ
関数の呼び出しではなく直接書き換わるため、若干高速
*/
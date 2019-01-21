# include <stdio.h>

int main(void) {
  int *data;
  int avarage = 0;
  int array[10] = {15, 78, 98, 15, 98, 85, 17, 35, 42, 15};

  data = array;
  for (data = array; data != &array[10]; data++) { // ポインタ変数をインクリメントすると隣のアドレスになる（隣のメモリ領域に移動する）
    avarage += *data;                              // ポインタ変数dataに配列の最初の要素のアドレスを代入し、一つずつ隣のメモリに移動していく。最後の要素のメモリに辿り着いたらループを終える
  }

  printf("%d\n", avarage / 10);
  return 0;
}

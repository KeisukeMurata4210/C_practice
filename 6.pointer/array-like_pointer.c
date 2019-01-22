# include <stdio.h>

int main(void) {
  int *data;
  int i;
  int avarage = 0;
  int array[10] = {15, 78, 98, 15, 98, 85, 17, 35, 42, 15};

  data = array; // ポインタ変数に配列のアドレスを代入
  for (i = 0; i < 10; i++) {
    avarage += data[i]; // []はアドレスの足し算をする演算子だから、配列のように使える
  }

  printf("%d\n", avarage / 10);
  return 0;
}

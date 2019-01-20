# include <stdio.h>

int main(void) {
  int array[10];
  printf("array：%p\n", array);//配列には「&」を付けない
  printf("array[0]：%p\n", &array[0]);//要素には「&」が必要
  printf("array[1]：%p\n", &array[1]);
  printf("array[2]：%p\n", &array[2]);

  return 0;
}
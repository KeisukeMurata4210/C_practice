# include <stdio.h>

int main(void) {
  int array[10] = {42, 79, 13};//不足分は0で初期化される
  int array2[] = {33, 67, 92}; //要素数を省略すると数値の個数分の要素を確保する
  int i, k;
  for(i = 0; i < 10; i++){
    printf("%2d：%d\n", i+1, array[i]);
  }
  printf("-----------\n");
  for(k = 0; k < 3; k++){
    printf("%2d：%d\n", k+1, array2[k]);
  }
  return 0;
}
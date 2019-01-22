# include <stdio.h>

void maxmin(int data[], int *max, int *min);

int main(void) {
  int i = 0, data[10], max, min;
  do {
    printf("%d 番目の数：", i + 1);
    scanf("%d", &data[i]);
    i++;
  }while(data[i-1] != -1);

  maxmin(data, &max, &min);

  printf("最大値 %d ： 最小値 %d\n", max, min);

  return 0;
}

void maxmin(int data[], int *max, int *min) {
  int i = 0;
  *max = 0;
  *min = 100;

  while(data[i] != -1) {
    if (data[i] > *max) *max = data[i];
    if (data[i] < *min) *min = data[i];
    i++;
  }
}
/*
値の更新をさせるときはポインタ変数を使った参照渡しを使う
C言語では判断した結果を返させるよりポインタを使った方が良さそうだ
*/
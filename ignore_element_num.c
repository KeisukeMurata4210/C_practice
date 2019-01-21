# include <stdio.h>

int getaverage(int data[10]);

int main(void) {
  int avarage, array[5] = {15, 98, 98, 17, 42};
  avarage = getaverage(array);
  printf("%d\n", avarage);
  return 0;
}

int getaverage(int data[10]) { //強引に10個の要素を処理して、結果がおかしくなる
  int i, avarage = 0;
  for (i = 0; i < 10; i++) {
    avarage += data[i];
  }
  return avarage / 10;
}
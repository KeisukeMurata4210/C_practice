# include <stdio.h>

int getaverage(int data[10]);

int main(void) {
  int avarage, array[10] = {15, 78, 98, 15, 98, 85, 17, 35, 42, 15};
  printf("array[3]: %d\n", array[3]);
  avarage = getaverage(array);
  printf("array[3]: %d\n", array[3]);
  printf("%d\n", avarage);
  return 0;
}

int getaverage(int data[10]) { // data[10]はポインタ型の変数
  int i, avarage = 0;
  for (i = 0; i < 10; i++) {
    avarage += data[i];
  }
  data[3] = 111; //配列の値を変更　→　呼び出し元でも値が変化する
  return avarage / 10;
}

/* 
配列の引数を受け取る時は
・data[10] 初学者っぽい書き方
・data[]   これを使う！
・*data　　 普通のポインタと紛らわしい
*/
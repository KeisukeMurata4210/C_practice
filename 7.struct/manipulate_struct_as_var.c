# include <stdio.h>
# include <string.h>

struct student {
  int year;
  int group;
  int number;
  char name[64];
  double stature;
  double weight;
};

int main(void) {
  struct student data1, data2; //変数と同じく複数定義できる

  data1.year = 3;
  data1.group = 4;
  data1.number = 18;
  strcpy(data1.name, "MARIO");
  data1.stature = 168.2;
  data1.weight = 72.4;

  data2 = data1; // 値を編集した上で、これも変数と同じく別の構造体に代入できる。 これは同じ構造体から作った変数同士でないとできないのかな。

  printf("data1.year = %d : data2.year = %d\n", data1.year, data2.year);
  printf("data1.group = %d : data2.group = %d\n", data1.group, data2.group);
  printf("data1.number = %d : data2.number = %d\n", data1.number, data2.number);
  printf("data1.name = %s : data2.name = %s\n", data1.name, data2.name);
  printf("data1.stature = %f : data2.stature = %f\n", data1.stature, data2.stature);
  printf("data1.weight = %f : data2.weight = %f\n", data1.weight, data2.weight);
  return 0;
}

/* 
変数のように扱えるが、比較や演算はできない 
*/
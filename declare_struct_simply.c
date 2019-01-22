# include <stdio.h>

typedef struct { // type definition　の略
  int year;
  int group;
  int number;
  char name[64];
  double stature;
  double weight;
} student;  // 「student型」を定義する

int main(void) {
  student data; // structをつけなくとも宣言できる
  data.year = 1;
  printf("%d\n", data.year);
  return 0;
}
# include <stdio.h>
# include <string.h>

typedef struct {
  int year;
  int group;
  int number;
  char name[64];
  double stature;
  double weight;
} student;

void student_print(student *data); // student型の引数

int main(void) {
  student data;

  data.year = 3;
  data.group = 4;
  data.number = 18;
  strcpy(data.name, "MARIO");
  data.stature = 168.2;
  data.weight = 72.4;

  student_print(&data);
  return 0;
}

void student_print(student *data) { // 処理の高速化のためポインタを渡す。構造体はサイズが大きくなりやすい
  printf("[学生]:%d\n", data->year); // 構造体のポインタ変数から要素を呼び出すときは、アロー演算子（->）を使う
  printf("[クラス]:%d\n", data->group);
  printf("[出席番号]:%d\n", data->number);
  printf("[名前]:%s\n", data->name);
  printf("[身長]:%f\n", data->stature);
  printf("[体重]:%f\n", data->weight);
  return;
}
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

void student_print(student data[], int count);

int main(void) {
  student data[10]; // student型（構造体）で要素数10の配列

  //全て同じ
  (*data).year; //配列名はポインタ変数であるため、通常変数モードで値を取り出す（＝配列の一つ目の要素＝student型の構造体data）、その構造体の要素を取得
  data->year;   //配列名はポインタ変数であり、構造体をポインタとして受け取ったときはアロー演算子で要素にアクセスする
  data[0].year; //配列の一つ目の要素＝student型の構造体dataの要素を取得する

  student_print(data, 5);
  return 0;
}

void student_print(student data[], int count) {
  int i;
  for (i = 0; i < count; i++) {
    printf("[学生]:%d\n", data[i].year);
    printf("[クラス]:%d\n", data[i].group);
    printf("[出席番号]:%d\n", data[i].number);
    printf("[名前]:%s\n", data[i].name);
    printf("[身長]:%f\n", data[i].stature);
    printf("[体重]:%f\n", data[i].weight);
  }
  return;
}
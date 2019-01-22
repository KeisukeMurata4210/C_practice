# include <stdio.h>
# include <string.h>

struct student { // struct 構造体タグ名
  int year;
  int group;
  int number;
  char name[64];
  double stature;
  double weight;
};

int main(void) {
  struct student data; // struct 構造体タグ名　変数名
  data.year = 10;   // year要素にアクセス
  printf("%d\n", data.year);

  strcpy (data.name, "MARIO"); // 変数と同じように扱える
  printf("%s\n", data.name);
  return 0;
}
# include <stdio.h>
# include <string.h> 
# include <stdlib.h>

typedef struct {
  char name[256];
  int age;
  int sex;
} People;

void InputPeople(People *data);

void ShowPeople(People data);

int main(void) {
  People *data;
  int i, count, datasize;
  
  datasize = 10;
  data = (People *)malloc(sizeof(People) * datasize);//構造体型の動的配列を、ひとまず要素10で定義する

  count = 0;
  while (1) {
    InputPeople(&data[count]);        //１番目の要素（＝構造体）から順番に入力していく
    if (data[count].age == -1) break; //年齢で-1が入力されるまで回り続ける
    count++;

    if (count >= datasize) {           //もし要素数よりたくさんの入力がなされたら、要素数を10拡張する
      datasize += 10;
      data = (People *)realloc(data, sizeof(People) * datasize);
    }
  }
  
  for (i = 0; i < count; i++) {
    ShowPeople(data[i]);
  }

  free(data);
  return 0;
}

void InputPeople(People *data) {
  printf("名前：");
  scanf("%s", data->name);
  printf("年齢：");
  scanf("%d", &data->age);
  printf("性別（1-男性、2-女性）：");
  scanf("%d", &data->sex);
  printf("\n");
}

void ShowPeople(People data) {
  char sex[16];

  printf("名前：%s\n", data.name);
  printf("年齢：%d\n", data.age);

  if (data.sex == 1) {
    strcpy(sex, "男性");
  } else {
    strcpy(sex, "女性");
  }

  printf("性別：%s\n", sex);
}
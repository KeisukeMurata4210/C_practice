# include <stdio.h>
# include <string.h> 

typedef struct {
  char name[256];
  int age;
  int sex;
} People;

void InputPeople(People *data);

void ShowPeople(People data);

int main(void) {
  People data[3];
  int i;
  
  for (i = 0; i < 3; i++) {
    InputPeople(&data[i]);
  }
  for (i = 0; i < 3; i++) {
    ShowPeople(data[i]);
  }

  return 0;
}

void InputPeople(People *data) {
  printf("名前：");
  scanf("%s", data->name);//なぜここだけ&をつけない？　配列と同じように、構造体自体のポインタは最初の要素のアドレスを指しているから？
  printf("年齢：");
  scanf("%d", &data->age);
  printf("性別（1-男性、2-女性）：");
  scanf("%d", &data->sex);
  printf("\n");
}

void ShowPeople(People data) {//なぜこちらはポインタで渡さない？？　値渡しの方が簡単だから、というだけ？　というより、特別な理由がない限りポインタは使わないのかもしれない
  char sex[16];                //InputPeopleはscanfを使うためにポインタを使った、ということ。

  printf("名前：%s\n", data.name);
  printf("年齢：%d\n", data.age);

  if (data.sex == 1) {
    strcpy(sex, "男性");
  } else {
    strcpy(sex, "女性");
  }

  printf("性別：%s\n", sex);
}
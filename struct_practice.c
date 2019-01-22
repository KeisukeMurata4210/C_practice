# include <stdio.h>

typedef struct {
  char name[20];
  int age;
  int sex;
} People;

int main(void) {
  People data[3];
  int i = 0;
  printf("3人分の名前、年齢、性別をそれぞれ入力してください。\n性別は「男」「女」のどちらかを入力してください\n");
  do {
    printf("名前：");
    scanf("%s", );
    i++;
  } while(i < 3);
  return 0;
}

//表示を別の関数にする
# include <stdio.h>

enum {  // 自動で0から番号が振られる
  NORMAL,
  DAMAGED,
  DYING,
};

int main(void) {
  int status = 2;
  switch(status) {
    case NORMAL:
      printf("正常です\n");
      break;
    case DAMAGED:
      printf("負傷してます\n");
      break;
    case DYING:
      printf("死にそうです＼(^o^)／\n");
      break;
  }

  return 0;
}
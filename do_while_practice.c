# include <stdio.h>

int main(void) {
  int score = 0;
  do {
    if (score != 0) printf("0〜100の範囲で入力してください。\n"); // 初期値でないとき、とすればエラーメッセージを出せる
    printf("テストの点数：");
    scanf("%d", &score);
  } while (score < 0 || score > 100);
  printf("点数は %d 点です。\n", score);
  return 0;
}
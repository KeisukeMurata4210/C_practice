# include <stdio.h>

int main(void) {
  // ローカル変数のスコープは関数内、正確にはブロック内
  int value1 = 10;
  int value2 = 20;
  printf("1:value1 %d\n", value1);
  printf("1:value2 %d\n", value2);
  {
    int value1; //ブロック内で同名の変数 = 別の変数として扱われる
    value1 = 30;
    value2 = 40; //ブロック外の変数にアクセス&代入できる。
    printf("2:value1 %d\n", value1);//ブロック内の変数を参照
    printf("2:value2 %d\n", value2);
  }
  printf("3:value1 %d\n", value1);
  printf("3:value2 %d\n", value2);//変更結果は残る
  return 0;
}
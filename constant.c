# include <stdio.h>
# define EXCISETAX 0.08 // 定数を宣言
# define USER "keisuke"

int main(void) {
  int price;
  const int LIMIT = 15;// constを使うやり方もある
  printf("本体価格：");
  scanf("%d", &price);
  price = (int)((1 + EXCISETAX) * price); //定数を使用
  printf("%sさんが支払う税込価格：%d\n", USER, price);
  printf("%d日までに払ってください\n", LIMIT);
  return 0;
}

/* 
特定の関数でのみ使う場合はconstを使う。
 
*/
# include <stdio.h>
# define GET_TRAPEZOID_AREA(A, B, H) (A + B) * H / 2

int main(void) {
  int up, down, h, s;
  printf("上底、下底、高さ：");
  scanf("%d,%d,%d", &up, &down, &h);
  s = GET_TRAPEZOID_AREA(up, down, h);
  printf("面積：%d\n", s);
  return 0;
}
/* 
注意！！
マクロはコードの置き換えでしかないため、h + 3 などの演算を渡すと予期しない値になることがある
マクロの式か呼び出しの時に()をつける！

基本的には定数の宣言のみに使う方が良い
*/
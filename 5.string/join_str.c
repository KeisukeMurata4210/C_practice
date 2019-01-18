# include <stdio.h>
# include <string.h>

int main(void) {
  char str[] = "hoge" "hoge";//初期化のときはただ並べるだけで連結される
  char str1[12] = "DRAGON";
  char str2[] = "QUEST";
  strcat(str1, str2); // 文字配列を連結
  printf("%s\n", str1);// 第一引数に上書きされる
  printf("%s\n", str);
  return 0;
}

/*
str1のサイズに注意！
連結結果がサイズを越えると暴走するかも
*/
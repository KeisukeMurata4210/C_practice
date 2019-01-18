# include <stdio.h>
# include <string.h>

int main(void) {
  /* 
  「ループで全要素を比較」をやってくれる関数 
  */
  char str1[256], str2[] = "DRAGONQUEST";

  scanf("%s", str1);

  if (strcmp(str1, str2) == 0){ // 等しい時は0を返す。でなければ正か負の値
    printf("同じ\n");
  }else{
    printf("違う\n");
  }
  return 0;
}
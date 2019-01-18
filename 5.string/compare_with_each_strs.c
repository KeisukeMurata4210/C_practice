# include <stdio.h>
# include <string.h>

int main(void) {
  /* 
  文字列は配列であるため、比較するにはループで全要素を比較する必要がある 
  */
  int len, i;
  char str1[256], str2[] = "DRAGONQUEST";

  scanf("%s", str1);

  len = strlen(str2);

  for (i = 0; i < len + 1; i++) { // EOSが末尾にあるため、「文字数+1」にする！！
    if (str1[i] != str2[i]) break;
  }

  if (i == len + 1){
    printf("同じ\n");
  }else{
    printf("違う\n");
  }
  return 0;
}
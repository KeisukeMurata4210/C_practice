# include <stdio.h>
# include <string.h>

int main(void) {
  char str1[61], str2[31];
  printf("名前と苗字の入力\n名前をローマ字30字以内で入力してください：");
  scanf("%30s", str1);
  printf("苗字をローマ字30字以内で入力してください：");
  scanf("%30s", str2);

  strcat(str1, str2);

  printf("名前と苗字：%s\n", str1);

  return 0;
}
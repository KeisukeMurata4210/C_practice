# include <stdio.h>

int main(void) {

  int input[10];
  int i = 0;
  printf("数値を10個入力してください。\n");
  do {
    printf("数値%d：", i+1);
    scanf("%d", &input[i]);
    i++;
  } while(i < 10);

  for (i = 10-1; i >= 0; i--) {
    printf("%d ", input[i]);
  }
  printf("\n");
  return 0;
}
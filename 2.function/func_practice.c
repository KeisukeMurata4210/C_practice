# include <stdio.h>

int holded(int);

int main(void) {
  int year;
  printf("西暦の年を入力してください：");
  scanf("%d", &year);
  if (holded(year))
    printf("開催されます。\n");
  else
    printf("開催されません。\n");
  return 0;
}

int holded(int year) {
  if (year % 2 == 0)
    return 1;
  else
    return 0;
}
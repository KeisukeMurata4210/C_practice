# include <stdio.h>

int main(void) {
  int i, array[5];
  array[0] = 1;
  for (i = 0; i < 5; i++) {
    printf("%d\n", array[i]);
  }
  return 0;
}
# include <stdio.h>
# include <string.h>

int main(void) {
  int array1[] = {45, 24, 67, 90, 13};
  int array2[] = {1, 2, 3, 4, 5};

  int i;
  for (i = 0; i < sizeof(array2)/sizeof(array2[0]); i++) {
    printf("array2[%d]：%d\n", i, array2[i]);
  }

  memcpy(array2, array1, sizeof(array1));//コピー先、コピー元、サイズ

  for (i = 0; i < sizeof(array2)/sizeof(array2[0]); i++) {
    printf("array2[%d]：%d\n", i, array2[i]);
  }
  return 0;
}
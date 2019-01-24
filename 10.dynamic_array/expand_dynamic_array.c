# include <stdio.h>
# include <stdlib.h>

int main(void) {
  int *heap;
  heap = (int *)malloc(sizeof(int) * 10);
  heap = (int *)realloc(heap, sizeof(int) * 100); //中身を保ったまま、要素数を変える
  free(heap);

  return 0;
}
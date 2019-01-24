# include <stdio.h>
# include <stdlib.h>

int main() {
  int i;
  int *heap;
  heap = (int *)malloc(sizeof(int) * 10); //「int型で要素数10」分のメモリを確保  「void *」型を「int *」型にキャストしている！！
  if (heap == NULL) exit(0);  // exit(0)はプログラムを終了させる

  for (i = 0; i < 10; i++) {
    heap[i] = i;
  }
  printf("%d\n", heap[5]);
  free(heap);

  return 0;
}
/* 
ポインタ変数の型は「int *」「char *」など、
他の型と合わさって初めてできあがる！
*/
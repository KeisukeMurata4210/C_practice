# include <stdio.h>

int main(void) {
  int no;
  scanf("%d", &no);
  switch (no) {
    case 1:
    case 2: //繋げることもできる
    case 3:
      printf("A/B/Cさん\n");
      break;
    case 4:
      printf("Dさん\n");
      break;
    case 5:
      printf("Eさん\n");
      break;
    default:
      printf("えっ\n");
      break;
  }
  return 0;
}
# include <stdio.h>

int main(int argc, char *argv[]) {
  if (argc > 1) {
    printf("%s\n", argv[1]);// Macだと動かないのかな
  }


  fflush(stdin);
  getchar();
  return 0;
}
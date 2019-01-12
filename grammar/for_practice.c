# include <stdio.h>

int main (void) {
  int n, m;
  for (n = 1; n <= 9; n++){
    for(m = 1; m <= 9; m++){
      printf("%2d ", n * m);
      if (m == 9) printf("\n");
    }
  }
  return 0;
}
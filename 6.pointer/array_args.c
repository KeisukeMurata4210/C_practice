# include <stdio.h>

int getaverage(int data[10]);

int main(void) {
  int avarage, array[10] = {15, 78, 98, 15, 98, 85, 17, 35, 42, 15};
  avarage = getaverage(array);
  printf("%d\n", avarage);
  return 0;
}

int getaverage(int data[10]) {
  int i, avarage = 0;
  for (i = 0; i < 10; i++) {
    avarage += data[i];
  }
  return avarage / 10;
}
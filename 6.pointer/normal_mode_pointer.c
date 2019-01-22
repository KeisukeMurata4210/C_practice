# include <stdio.h>

int main(void) {
  int *p, i = 5; //iの初期値は5
  p = &i;        //iのアドレスをpに代入。つまりpとiは同じアドレスを指している
  *p = 10;//ノーマル変数モードで10を代入。pが持っているアドレスつまりiに、10が代入される
  printf("p：%p\n", p);  
  printf("*p：%d\n", *p);
  printf("&i：%p\n", &i);
  return 0;
}
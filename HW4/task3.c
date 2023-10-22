#include <stdio.h>

int main(){
 int a, b;
 a = 1;
 b = 7;
 while (a <= 9) {
  printf("%d x %d = %d\n", a, b, a * b);
  a = a + 1;
 }
 return 0;
}

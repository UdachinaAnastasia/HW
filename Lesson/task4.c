#include <stdio.h>

int main(){
 int n = 35; 
 while (n <= 87) {
  if (n % 7 == 1 || n % 7 == 2 || n % 7 == 5) {
   printf("%d\n", n);
  }
  n++;
 } 
 return 0;
}

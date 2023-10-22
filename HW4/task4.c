#include <stdio.h>

int main(){
 int n, mult;
 mult = 8;
 scanf("%d", &n);
 while(n > 8) {
  mult = mult * n;
  n = n - 1;  
 }
 printf("%d\n", mult);
 return 0;
}

#include <stdio.h>

int main(){
 int n = 100;
 int sum = 0;
 while(n <= 200){
  if(n % 17 == 0) {
   sum = sum + n;
  }
  n++;
 }
  printf("%d\n", sum);
 return 0;
}

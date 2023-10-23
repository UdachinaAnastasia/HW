#include <stdio.h>

int main(){
 long long int n = 10;
 long long int mult = 1;
 while (n <= 99) {
  if(n % 13 == 0){
   mult = mult * n;
  }
  n++;
 }
 printf("%lld\n", mult);
 return 0;
}

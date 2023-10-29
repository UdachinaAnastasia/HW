#include <stdio.h>

int main(){
 int fact;
 scanf("%d", &fact);
 int n = 0;
 if(fact == 0 || fact == 1){
  printf("1\n");
 } else {
  while(fact != 1){
   n++;
   fact = fact / n;
  }
  printf("%d\n", n);
 }
 return 0;
}

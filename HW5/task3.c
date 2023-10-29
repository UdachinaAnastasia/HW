#include <stdio.h>

int main(){
 int h;
 scanf("%d", &h);
 int space = 0;
 int symb = 1;
 while(h != 0){
  space = h - 1;
  while(space != 0){
   printf(" ");
   space--;
  }
  for(int i = symb; i > 0; i--){
   printf("^");
  }
  printf("\n");
  symb = symb + 2; 
  h--;
 }
 return 0;
}

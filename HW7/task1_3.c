#include <stdio.h>

int main(){
 int arr_3[5][7];
 int n = 0;
 for(int i = 0; i < 5; i++){
  for(int j = 0; j < 7; j++){
   arr_3[i][j] = n++;
  }
 } 
 for(int i = 0; i < 5; i++){
  for(int j = 0; j < 7; j++){
   printf("%d ", arr_3[i][j]);
  }
  printf("\n");
 } 
 return 0;
}

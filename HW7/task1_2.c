#include <stdio.h>

int main(){
 int arr_2[5][7];
 int n = 0;
 int i = 0;
 int j = 0;
 while(i < 4 || j < 6){ 
  if(j < 7){
   arr_2[i][j] = n++;
   j++;
  } else if(i == 7) {
   i++;
   j = 0;
  }
 }
 for(int i = 0; i < 5; i++){
  for(int j = 0; j < 7; j++){
   printf("%d ", arr_2[i][j]);
  }
  printf("\n");
 } 
 return 0;
}

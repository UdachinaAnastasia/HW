#include <stdio.h>

int main(){
 double arr[30];
 for(int i = 0; i < 30; i++){
  printf("arr[%d] ", i);
  scanf("%le", &arr[i]);
 }
 double arr_max = arr[0];
 int i_max = 0;
 for(int i = 1; i < 30; i++){
  if(arr[i] > arr_max){
   arr_max = arr[i];
   i_max = i;
  }
 }
 printf("i_max = %d \n", i_max);
 
 return 0;
}

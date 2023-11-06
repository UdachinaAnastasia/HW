#include <stdio.h>
#include <malloc.h>

int main(){
 int *arr;
 int n, m;
 printf("Enter the number of rows ");
 scanf("%d", &n);
 printf("Enter the number of items in the row ");
 scanf("%d", &m); 
 arr = (int*) malloc (n * m * sizeof(int));
 for(int i = 0; i < n; i++){
  for(int j = 0; j < m; j++){
   printf("Enter an array element arr[%d][%d]\n ", i, j);
   scanf("%d", (arr + i * m + j));
  }
 }
 for(int i = 0; i < n; i++){
  for(int j = 0; j < m; j++){
   printf("%d ", *(arr + i * m + j));
  }
  printf("\n");
 } 
 free(arr);
 return 0;
}

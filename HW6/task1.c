#include <stdio.h>
#include <string.h>
#include <stdlib.h>


int main(){
 char string1[128];
 char string2[128];
 printf("Введите первую строку размером не более 127 символов\n");
 fgets(string1, sizeof(string1), stdin);
 printf("Введите вторую строку размером не более 127 символов\n");
 fgets(string2, sizeof(string2), stdin);
 char string3[128];
 char string4[128];
 int n = 0;
 for (int i = 0; i < sizeof(string1); i++){ 
 if(string1[i] != ' '){
   string3[n] = string1[i];
   n++; 
  }
 }
 int x = 0;
 for (int i = 0; i < sizeof(string2); i++){ 
 if(string2[i] != ' '){
   string4[x] = string2[i];
   x++; 
  }
 }
 int res = strcmp(string3, string4);
 if(res == 0){
  printf("При игнорировании пробелов строки одинаковы\n");
 } else {
  printf("При игнорировании пробелов строки не одинаковы\n");
 }
 return 0;
}

#include <stdio.h>

int main(){
 double a;
 a = 1.7E+308;
 a = a + a;
 printf("%le\n", a);
 return 0;
}

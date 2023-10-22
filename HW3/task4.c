#include <stdio.h>

int main(){
 double a, n, m;
 a = 3.12;
 n = 1;
 a = a * n;
 n = a * a;
 a = a * a;
 n = n * a;
 printf("%le\n", n);
 a = 3.12;
 m = a * a;
 n = m * m;
 n = n * n;
 n = n * m;
 printf("%le\n", n);
 return 0;
}

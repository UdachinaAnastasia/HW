#include <stdio.h>

int main(){
 int a = 11111111;
 int cif0, cif1, cif2, cif3, cif4, cif5, cif6, cif7, remains, sum;
 sum = 0;
 remains = a;
 cif0 = (remains % 10) * 1;
 sum = sum + cif0;
 remains = remains / 10;
 cif1 = (remains % 10) * 2;
 sum = sum + cif1;
 remains = remains / 10;
 cif2 = (remains % 10) * 4;
 sum = sum + cif2;
 remains = remains / 10;
 cif3 = (remains % 10) * 8;
 sum = sum + cif3;
 remains = remains / 10;
 cif4 = (remains % 10) * 16;
 sum = sum + cif4;
 remains = remains / 10;
 cif5 = (remains % 10) * 32;
 sum = sum + cif5;
 remains = remains / 10;
 cif6 = (remains % 10) * 64;
 sum = sum + cif6;
 remains = remains / 10;
 cif7 = (remains % 10) * 128;
 sum = sum + cif7;
 printf("%d\n", sum);
 return 0;
}

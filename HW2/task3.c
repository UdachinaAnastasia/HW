#include <stdio.h>

int main()
{
    int n, m, res, last_digit;
    n = 99;
    m = 3;
    res = n/m;
    last_digit = res % 10;
    printf("%d\n", last_digit);
    return 0;
}


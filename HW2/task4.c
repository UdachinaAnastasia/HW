#include <stdio.h>

int main()
{
    int k, hours,hours_output, min;
    k = 456;
    hours = k / 3600;
    hours_output = hours % 24;
    min = ((k - hours * 3600) / 60);
    printf("%d:%d\n", hours_output, min);
    return 0;
}

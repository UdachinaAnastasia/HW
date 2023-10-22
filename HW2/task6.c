#include <stdio.h>

int main()
{
    int k, hours, hours_cif1, hours_cif2, min, min_cif1, min_cif2, sec_cif1, sec_cif2;
    k = 456;
    hours = k / 3600;
    hours_cif1 = hours % 24 % 10;
    hours_cif2 = hours % 24 / 10;
    min= ((k - hours * 3600) / 60);
    min_cif1 = ((k - hours * 3600) / 60) % 10;
    min_cif2 = ((k - hours * 3600) / 60) / 10;
    sec_cif1 = (k - hours * 3600 - min * 60) % 10;
    sec_cif2 = (k - hours * 3600 - min * 60) / 10;
    printf("%d%d:%d%d:%d%d\n", hours_cif2, hours_cif1, min_cif2, min_cif1, sec_cif2, sec_cif1);
    return 0;
}

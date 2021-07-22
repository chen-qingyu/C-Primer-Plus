#include <stdio.h>
#include <float.h>

int main(void)
{
    double dbl = 1.0 / 3.0;
    float flt = 1.0 / 3.0;

    printf("FLT_DIG: %d. DBL_DIG: %d.\n", FLT_DIG, DBL_DIG);
    printf("Double: %-20.6f Float: %-20.6f\n", dbl, flt);
    printf("Double: %-20.12f Float: %-20.12f\n", dbl, flt);
    printf("Double: %-20.16f Float: %-20.16f\n", dbl, flt);

    return 0;
}

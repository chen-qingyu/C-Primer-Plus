#include <stdio.h>
#include <limits.h>
#include <float.h>

int main(void)
{
    printf("INT_MAX = %d\nINT_MAX + 1 = %d\n", INT_MAX, INT_MAX + 1);
    printf("FLT_MAX = %f\nFLT_MAX * 2 = %f\n", FLT_MAX, FLT_MAX * 2);
    printf("FLT_MIN = %f\nFLT_MIN / 2 = %f\n", FLT_MIN, FLT_MIN / 2);

    return 0;
}

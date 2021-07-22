#include <stdio.h>

int main(void)
{
    int N, i, k;
    double sum_1 = 0, sum_2 = 0;
    while (1)
    {
        printf("Please enter the N: ");
        scanf("%d", &N);
        if (N < 1)
        {
            break;
        }
        for (i = 1, k = 1, sum_1 = 0, sum_2 = 0; i < N + 1; i++, k = -k)
        {
            sum_1 += 1.0 / i;
            sum_2 += (double)k / i;
        }
        printf("sum_1: %lf\nsum_2: %lf\n", sum_1, sum_2);
    }

    return 0;
}

#include <stdio.h>

int main(void)
{
    int lower, upper, result, i;
    while (1)
    {
        printf("Enter lower and upper integer limits: ");
        scanf("%d %d", &lower, &upper);
        if (lower >= upper)
        {
            break;
        }
        for (i = lower, result = 0; i <= upper; i++)
        {
            result += i * i;
        }
        printf("The sums of the squares from %d to %d is %d\n", lower * lower, upper * upper, result);
    }
    printf("Done!\n");

    return 0;
}

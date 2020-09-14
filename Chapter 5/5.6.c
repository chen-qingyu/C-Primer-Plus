#include <stdio.h>

int main(void)
{
    int count = 0, sum = 0;
    int top;
    printf("Please enter the top2: ");
    scanf("%d", &top);
    while (count++ < top)
    {
        sum += count * count;
    }
    printf("Sum2 = %d\n", sum);

    return 0;
}

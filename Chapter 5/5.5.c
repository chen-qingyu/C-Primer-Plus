#include <stdio.h>

int main(void)
{
    int count = 0, sum = 0;
    int top;
    printf("Please enter the top: ");
    scanf("%d", &top);
    while (count++ < top)
    {
        sum += count;
    }
    printf("Sum = %d\n", sum);

    return 0;
}

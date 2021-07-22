#include <stdio.h>

int main(void)
{
    double x, y;
    printf("Please enter two float numbers:\n");
    while (2 == scanf("%lf %lf", &x, &y))
    {
        printf("The result is %lf\n", (x - y) / (x * y));
        printf("Please input two float numbers:\n");
    }

    return 0;
}

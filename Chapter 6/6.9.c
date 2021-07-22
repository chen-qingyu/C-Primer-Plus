#include <stdio.h>

double cal(double num1, double num2)
{
    return (num1 - num2) / (num1 * num2);
}

int main(void)
{
    double x, y;
    printf("Please enter two float numbers:\n");
    while (2 == scanf("%lf %lf", &x, &y))
    {
        printf("The result is %lf\n", cal(x, y));
        printf("Please input two float numbers:\n");
    }

    return 0;
}

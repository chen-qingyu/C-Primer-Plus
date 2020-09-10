#include <stdio.h>

double cube(double cu)
{
    return cu * cu * cu;
}

int main(void)
{
    double num;
    printf("Please enter a number:");
    scanf("%lf", &num);
    num = cube(num);
    printf("number's cube is:%.2lf\n", num);

    return 0;
}

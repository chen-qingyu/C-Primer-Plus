#include <stdio.h>

int main(void)
{
    double years, seconds;
    printf("Years: ");
    scanf("%lf", &years);
    seconds = years * 3.156e7;
    printf("Seconds: %.lf\n", seconds);

    return 0;
}

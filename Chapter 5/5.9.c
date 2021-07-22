#include <stdio.h>

void temperatures(double F)
{
    const double C = 5.0 / 9.0 * (F - 32.0);
    printf("Fahrenheit:%.2lf\nCelsius: %.2lf\nKelvin:%.2lf\n", F, C, C + 273.16);
}

int main(void)
{
    double F;
    printf("Please enter the Fahrenheit degree (q to quit):");
    while (scanf("%lf", &F))
    {
        temperatures(F);
        printf("please enter the Fahrenheit degree (q to quit):");
    }

    return 0;
}

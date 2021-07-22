#include <stdio.h>

int main(void)
{
    double quart, num;
    printf("Please enter the quart number of water: ");
    scanf("%lf", &quart);
    num = (quart * 950) / 3e-23;
    printf("There are %e water molecules.", num);

    return 0;
}

#include <stdio.h>

int main(void)
{
    int day;
    printf("Please enter the days(enter <= 0 exit): ");
    scanf("%d", &day);
    while (day > 0)
    {
        printf("%d days are %d weeks, %d days.\n", day, day / 7, day % 7);
        printf("Please enter the days(enter <= 0 exit): ");
        scanf("%d", &day);
    }

    return 0;
}

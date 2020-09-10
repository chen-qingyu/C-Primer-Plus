#include <stdio.h>
#define TRANS 60

int main(void)
{
    int minute;
    printf("Please enter the minutes(enter <= 0 exit): ");
    scanf("%d", &minute);
    while (minute > 0)
    {
        printf("The time: %d hour(s) %d minute(s)\n", minute / TRANS, minute % TRANS);
        printf("Please enter the minutes(enter <= 0 exit): ");
        scanf("%d", &minute);
    }

    return 0;
}

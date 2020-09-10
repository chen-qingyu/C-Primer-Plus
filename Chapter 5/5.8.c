#include <stdio.h>

int main(void)
{
    int modl, modr;
    printf("This program computes moduli.\n");
    printf("Enter an integer as a divisor:\n");
    scanf("%d", &modr);
    printf("Now enter the first operand(<= 0 to quit):\n");
    scanf("%d", &modl);
    while (modl > 0)
    {
        printf("%d %% %d is %d\n", modl, modr, modl % modr);
        printf("Enter the next number(<= 0 to quit):\n");
        scanf("%d", &modl);
    }
    printf("Done!\n");

    return 0;
}

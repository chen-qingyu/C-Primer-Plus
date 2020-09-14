#include <stdio.h>

int main(void)
{
    int up, down;
    printf("Please enter the down and up: ");
    if (2 == scanf("%d %d", &down, &up))
    {
        for (int i = down; i <= up; i++)
        {
            printf("%d\t%d\t%d\n", i, i * i, i * i * i);
        }
    }

    return 0;
}
